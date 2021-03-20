/*
  Ultrasonic Sensor sketch

  This program reads a Devantech SRF04 ultrasonic distance sensor
  The SRF04 sensor's pins are connected as described below.
 
*/

#define echoPin 2             // the SRF04's echo pin
#define initPin 3             // the SRF04's init pin
unsigned long pulseTime = 0;  // variable for reading the pulse

void setup() {
  // make the init pin an output:
  pinMode(initPin, OUTPUT);
  // make the echo pin an input:
  pinMode(echoPin, INPUT);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // send the sensor a 10microsecond pulse:
  digitalWrite(initPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(initPin, LOW);

  // wait for the pulse to return. The pulse
  // goes from low to HIGH to low, so we specify
  // that we want a HIGH-going pulse below:

  pulseTime = pulseIn(echoPin, HIGH);

}
