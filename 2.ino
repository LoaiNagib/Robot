
#include Wire.h 
#include LiquidCrystal_I2C.h
 

#define e 8  Echo Pin
#define t 7  Trigger Pin
#define LEDPin 13  Onboard LED
int KEY = 11; 
int maximumRange = 50;  Maximum range needed
int minimumRange = 0;  Minimum range needed
long duration, distance;  Duration used to calculate distance

void setup() {
   
 lcd.init();                       initialize the lcd 
  pinMode(KEY, INPUT);
   Print a message to the LCD.
 lcd.backlight();
 Serial.begin (9600);
 pinMode(t, OUTPUT);
 pinMode(e, INPUT);
 pinMode(LEDPin, OUTPUT);  Use LED indicator (if required)
}

void loop() {
 The following trigPinechoPin cycle is used to determine the
 distance of the nearest object by bouncing soundwaves off of it.  
 digitalWrite(t, LOW); 
 delayMicroseconds(1); 

 digitalWrite(t, HIGH);
 delayMicroseconds(10); 
 
 digitalWrite(t, LOW);
 duration = pulseIn(e, HIGH);
 
 Calculate the distance (in cm) based on the speed of sound.
 distance = (duration2)29.1;
 
 if (distance = maximumRange ){

 lcd.print(saif); 
lcd.print(distance); 
 }
 else {
if (distance  50 && distance1  )
 lcd.print(dinger);
lcd.print(distance);  
 }

    if(digitalRead(KEY)==LOW)       Read Touch sensor signal
 
     { 
     lcd.print(  touched me);
     }
   else
     {
      
       lcd.print(  hgfghf);
     }
 delay(50);
 lcd.clear();
}
