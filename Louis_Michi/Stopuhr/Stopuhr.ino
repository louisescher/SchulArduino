/*
 * Stoppuhr am Display
 * Louis Escher und Michael Flach
 * 22.10.2021
 */

//Display Library Import
#include <LiquidCrystal.h>

//VAriables for Display Initialization
const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

//Variables for Timer (Seconds, Minutes, Hours)
int Timer;
int TimerMins = 0;
int TimerHours = 0;

//Variables for Buttons
int StartTimerButton = 8;
int PauseTimerButton = 9;

//Variables for checking if a Button gets pressed
int buttonState_stopstart = 0;
int buttonState_pause = 0;

//Booleans 
boolean isTimerRunning = false;
boolean isTimerPaused = false;

//Char String for the text on the Display 'cuz why not
char TimerStateString[] = "Timer:";

//Setup call
void setup() {
   Serial.begin(9600);
   lcd.begin(16, 2);                                                                // Set the Display's rows and columns
}

//Loop call
void loop() {

  buttonState_stopstart = digitalRead(StartTimerButton);                            // Read Start/Stop Button
  buttonState_pause = digitalRead(PauseTimerButton);                                // Read Pause Button

  if (buttonState_stopstart == HIGH) {                                              // If the Stop/start Button gets pressed...
      if(isTimerRunning == false) {                                                 // If the Timer is NOT running...
        if(isTimerPaused == false) {                                                // AND if the Timer is NOT paused
          isTimerRunning = true;
        } else {                                                                    // If the Timer is not Running but IS paused
          //Reset Timer
          Timer = 0;                                                                // Set Seconds to 0
          TimerMins = 0;                                                            // Set Minutes to 0
          TimerHours = 0;                                                           // Set Hours to 0
          isTimerRunning = false;                                                   // Turn off the Timer
          isTimerPaused = false;                                                    // Turn off the Timer
        }
      }
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
        } 
      }
  } 

  if(isTimerRunning == true) {                                                      // Check if Timer is running, if yes, add a second to the timer
    Timer++;
  } 
  
  if(isTimerPaused == true) {                                                       // If the Timer is Paused, do nothing
    //Nothing here
  }

  if(Timer >= 60) {                                                                 // If the Seconds counter is 60 or above, add a minute and clear the seconds
    TimerMins++;
    Timer = 0;
  }
  
  if(TimerMins >= 60) {                                                             // If the Minutes counter is 60 or above, add a hour and clear the minutes
    TimerHours++;
    TimerMins = 0;
  }
  
   lcd.print(TimerStateString);                                                     // Print the String in the First Line 
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
