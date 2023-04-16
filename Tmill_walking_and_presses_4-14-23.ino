//Importing libraries
#include <Keyboard.h>
#include <Mouse.h>
//#include <I2Cdev.h>
#include <MPU6050.h>
#include <Wire.h>

//setting Pins that will be used and what they are used for
int runPin = 2;       //pin working with the Tmill to controle movment
int leftPin = 3;      //pin that conroles turning left
int rightPin = 4;     //pin that controles turning right
int fpPin = 5;        //pin to put the character into fake firstperson
int xPin = 6;         //pin that is used for interacting with things in game
//initializing vars
int spress =0;        
int leftStatus=1;
int rightStatus=1;
int fpStatus=1;
int xStatus=1;
float revolutions=0;
int rpm=0; // max value 32,767 16 bit
long  startTime=0;
long  elapsedTime;

void setup() 
{
    // set pin to input
    Serial.begin(9600);
    pinMode(runPin, INPUT_PULLUP);           
    pinMode(leftPin, INPUT_PULLUP); 
    pinMode(rightPin, INPUT_PULLUP); 
    pinMode(fpPin, INPUT_PULLUP);
    pinMode(xPin, INPUT_PULLUP);
    Keyboard.begin();
}
 
void loop() {

leftStatus=digitalRead(leftPin);
rightStatus=digitalRead(rightPin);
fpStatus=digitalRead(fpPin);
xStatus=digitalRead(xPin);

// LOOP TO CHECK IF THE TMILL IS MOVING (GREATER THAN 0)  
if (rpm>0){
  Keyboard.press('w');  //If the Tmill is moving then the w button is pressed
}
else{Keyboard.release('w');} //if the Tmill is not moving release the w button


String outMsg = String("RPM :") + rpm; //Used to display the RPM in the con to be able to visually view the RPM
Serial.println(outMsg);



 if (leftStatus==HIGH) //LEFT ARROW PRESSED
 {
    Keyboard.press('a');

 }
 
 if (leftStatus==LOW) //LEFT ARROW RELEASED
 {
    Keyboard.release('a');
 }

 if (rightStatus==HIGH) //RIGHT ARROW PRESSED
 {
    Keyboard.press('d');
 }

 if (rightStatus==LOW) //RIGHT ARROW RELEASED
 {
    Keyboard.release('d');

 }

if (fpStatus==HIGH) //macro to put the player into fake first person
 {
    //loop to make the player walk back and enough so the player is invis
    while (spress != 10){
      spress +=1;
      Keyboard.press('s');
      delay(50);
    }
    Keyboard.release('s'); //stop moving back
    Mouse.press(MOUSE_RIGHT); //hold the right mouse button to keep the cam fixed on first person 
 }
 
 if (fpStatus==LOW) //go out of first person
 {
    spress = 0; //reset spress so its 0 for next time we enter first person
    Keyboard.release('s');
    Mouse.release(MOUSE_RIGHT);   //release the right mouse button to fully realse the camera angle from fake first person
 }

if (xStatus==HIGH) //x PRESSED
 {
    Keyboard.press('x');
    
 }

 if (xStatus==LOW) //x RELEASED
 {
    Keyboard.release('x');

 }

//Calcualting the RPM
revolutions=0; //Setting the revulutions to 0
rpm=0;  //setting the RPM's to 0
startTime=millis();         
attachInterrupt(digitalPinToInterrupt(2),interruptFunction,RISING); //getting input from pin 2 (the pin that he Tmill switch is conected too)
delay(200); //delay 1/5 of a second before the next check
detachInterrupt(2);               

//now let's see how many counts we've had from the hall effect sensor and calc the RPM
elapsedTime=millis()-startTime;     //finds the time
if(revolutions>0) //if Revolutions are greater than 0 then calc the RPM
{
  rpm=(max(1, revolutions) * 60000) / elapsedTime;        //calculates rpm
  
}

}

void interruptFunction() //interrupt service routine
{  
  revolutions++;
}
