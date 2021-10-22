/*
 * Stoppuhr am Display
 * Louis Escher
 * 22.10.2021
 */
 
#include <LiquidCrystal.h>

const int rs = 11, en = 12, d4 = 2, d5 = 3, d6 = 4, d7 = 5;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

int LDR = 1;
int Timer;

int StartTimerButton = 8;
int PauseTimerButton = 9;

int buttonState_stopstart = 0;
int buttonState_pause = 0;

boolean isTimerRunning = false;
boolean isTimerPaused = false;
 
void setup() {
   Serial.begin(9600);
   lcd.begin(16, 2);
}

void startTimer() {
  
}

void pauseTimer() {
  
}

void resetTimer() {
  
}

void loop() {

  buttonState_stopstart = digitalRead(StartTimerButton);
  buttonState_pause = digitalRead(PauseTimerButton);

  if (buttonState_stopstart == HIGH) {
      if(isTimerRunning == false) {
        if(isTimerPaused == false) {
          //Start Timer
        } else {
          //Reset Timer to 0
        }
      } else {  //Timer is running
        // Do nothing
      }
  } else {
    delay(50);
  }
 
  if (buttonState_pause == HIGH) {
      if(isTimerRunning == true) {
        // Pause Timer
      } else {
        if(isTimerPaused == true) {
          // Resume Timer
        } else {
          //Do nothing
        }
      }
  } else {
    delay(50);
  }
  
   lcd.print("Time:");
   lcd.setCursor(0, 1);
   lcd.print(Timer);
   delay(500);
   lcd.clear();
}
