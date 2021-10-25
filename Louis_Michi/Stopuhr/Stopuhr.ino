/*
 * Stoppuhr am Display
 * Louis Escher
 * 22.10.2021
 */
 
#include <LiquidCrystal.h>

const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int Timer;
int TimerMins = 0;
int TimerHours = 0;

int StartTimerButton = 8;
int PauseTimerButton = 9;

int buttonState_stopstart = 0;
int buttonState_pause = 0;

boolean isTimerRunning = false;
boolean isTimerPaused = false;

char TimerStateString[] = "Timer:";
 
void setup() {
   Serial.begin(9600);
   lcd.begin(16, 2);
}

void loop() {

  buttonState_stopstart = digitalRead(StartTimerButton);                            //Read Start/Stop Button
  buttonState_pause = digitalRead(PauseTimerButton);                                // Read Pause Button

  if (buttonState_stopstart == HIGH) {                                              // If the Stop/start Button gets pressed...
      if(isTimerRunning == false) {                                                 // If the Timer is NOT running...
        if(isTimerPaused == false) {                                                // AND if the Timer is NOT paused
          //Start Timer
          isTimerRunning = true;
        } else {                                                                    // If the Timer is not Running but IS paused
          Timer = 0;                                                                // Set Timer to 0
          TimerMins = 0;
          TimerHours = 0;
          isTimerRunning = false;
          isTimerPaused = false;
        }
      } else {                                                                      // Timer is running
        // Do nothing
      }
  } else {
    //Do nothing
  }
 
  if (buttonState_pause == HIGH) {                                                  // If Pause Button gets pressed
      if(isTimerRunning == true) {                                                  // If the Timer is running
        // Pause Timer
        isTimerRunning = false;                                                     // Timer is no longer running
        isTimerPaused = true;                                                       // Timer is now paused
      } else {                                                                      // If the Timer is NOT running
        if(isTimerPaused == true) {                                                 // If the Timer is Paused
          isTimerPaused = false;                                                    // Unpause the Timer
          isTimerRunning = true;                                                    // Set Timer to running
        } else {                                                                    // If timer is just not Running (Turned off)
          //Do nothing
        }
      }
  } else {
    // Do nothing
  }

  if(isTimerRunning == true) {                                                      // Check if Timer is running, if yes, add a Second to the timer
    Timer++;
  } 
  if(isTimerPaused == true) {                                                       // If the Timer is Paused, do nothing
    //Nothing here
  }

  if(Timer >= 60) {                                                                 // If the Seconds counter is 60 or above, add a Minute and clear the seconds
    TimerMins++;
    Timer = 0;
  }
  
  if(TimerMins >= 60) {                                                             // If the Minutes counter is 60 or above, add a hour and clear the minutes
    TimerHours++;
    TimerMins = 0;
  }
  
   lcd.print(TimerStateString);                                                     // Print in the First Line 
   lcd.setCursor(0, 1);                                                             // Set Cursor in next Line
   lcd.print(TimerHours);                                                           // Print Hours
   lcd.print("h, ");                                                                // String
   lcd.print(TimerMins);                                                            // Print Minutes
   lcd.print("m, ");                                                                // String
   lcd.print(Timer);                                                                // Print Seconds
   lcd.print("s");                                                                  // String
   delay(980);                                                                      // Wait a second (Not exactly a second here to allow for delays happening in the code and because of the slow computing speed on the arduino)
   lcd.clear();                                                                     // Clear Display to allow for a new loop
}
