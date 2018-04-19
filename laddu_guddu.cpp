//#include <Servo.h>
int echo = 12;
int trig = 13;
int buzz = 11;
int led = 10;

int calibrationTime = 5;
///the time when the sensor outputs a low impulse
long unsigned int lowIn;
///the amount of milliseconds the sensor has to be low
///before we assume all motion has stopped

long unsigned int pause = 3000;

boolean lockLow = true;
boolean takeLowTime;

int pirPin = 7;    ///the digital pin connected to the PIR sensor's output
int ledPin = 6;


//int servoPin = 11;
//int lightPin = A0;  //define a pin for Photo resistor
//int ledPin=5;
//Servo Servo1;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
//Servo1.attach(servoPin);

///for sonar machine..........
pinMode(echo,INPUT);
pinMode(trig,OUTPUT);
pinMode(buzz,OUTPUT);
pinMode(led,OUTPUT);
//pinMode(servoPin,OUTPUT);
//pinMode(ledPin,OUTPUT);



///for motion detector.....
pinMode(pirPin, INPUT);
pinMode(ledPin, OUTPUT);

///give the sensor some time to calibrate
  Serial.print("calibrating sensor ");
    for(int i = 0; i < calibrationTime; i++){
      Serial.print(".");
      delay(1000);
      }

    Serial.println(" done");
    Serial.println("SENSOR ACTIVE");
    delay(50);


}



void loop() {
/// sonar machine starts.....///

double duration,distance;
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
duration = pulseIn(echo,HIGH);
distance = (duration/2.00)/29.1; /// distance calculate in centimeter


if(distance < 10)/// distance less than 10 then led blink and tone
{
  tone(buzz,1000);
  digitalWrite(led,HIGH);
  //Servo1.write(90);
}
else /// no tone and no led
{
  noTone(buzz);
  digitalWrite(led,LOW);
  //Servo1.write(0);
}



Serial.println(distance);///print the distance
delay(500);

///sonar machine ends.........//


///motion sensor starts....///
if(digitalRead(pirPin) == HIGH){
       digitalWrite(ledPin, HIGH);   //the led visualizes the sensors output pin state
       tone(buzz,1000);
       delay(1000);
       if(lockLow){
         ///makes sure we wait for a transition to LOW before any further output is made:
         lockLow = false;
         Serial.println("---");
         Serial.print("motion detected at ");
         Serial.print(millis()/1000);
         Serial.println(" sec");
         delay(100);
         }
         takeLowTime = true;
       }

     if(digitalRead(pirPin) == LOW){
       digitalWrite(ledPin, LOW);  ///the led visualizes the sensors output pin state
       noTone(buzz);

       if(takeLowTime){
        lowIn = millis();          ///save the time of the transition from high to LOW
        takeLowTime = false;       ///make sure this is only done at the start of a LOW phase
        }
       ///if the sensor is low for more than the given pause,
       ///we assume that no more motion is going to happen

       if(!lockLow && millis() - lowIn > pause){
           ///makes sure this block of code is only executed again after
           ///a new motion sequence has been detected
           lockLow = true;
           Serial.print("motion ended at ");      //output
           Serial.print((millis() - pause)/1000);
           Serial.println(" sec");
           delay(100);
           }
       }
///motion sensor ends....////


}
