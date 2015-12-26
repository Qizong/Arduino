#include <Servo.h>

// Title:   Auto Pan-Tilt Servo/Cam Control
// Subject: This Sketch receives X,Y coordinates from srial then 
//          moves the camera to center of those coordinates. 
// Remixed: TechBitar / Hazim Bitar
// Date:    Dec 2011
// Credit:  I based this sketch on zagGrad's (SparkFun) code.  

#define  servomaxx   180   // max degree servo horizontal (x) can turn
#define  servomaxy   180   // max degree servo vertical (y) can turn
#define  screenmaxx   320   // max screen horizontal (x)resolution
#define  screenmaxy   240    // max screen vertical (y) resolution
#define  servocenterx   180  // center po#define  of x servo
#define  servocentery   90  // center po#define  of y servo
#define  servopinx   5  // digital pin for servo x
#define  servopiny   6  // digital servo for pin y
#define  baudrate 57600  // com port speed. Must match your C++ setting
#define distancex 1  // x servo rotation steps
#define distancey 1  // y servo rotation steps

int valx = 0;       // store x data from serial port
int valy = 0;       // store y data from serial port
int posx = 0;
int posy = 0;
int incx = 10;  // significant increments of horizontal (x) camera movement
int incy = 10;  // significant increments of vertical (y) camera movement

Servo servox;
Servo servoy;

short MSB = 0;  // to build  2 byte integer from serial in byte
short LSB = 0;  // to build  2 byte integer from serial in byte
int   MSBLSB = 0;  //to build  2 byte integer from serial in byte

void setup() {

  Serial.begin(baudrate);        // connect to the serial port
  Serial.println("Starting Cam-servo Face tracker");

  pinMode(servopinx,OUTPUT);    // declare the LED's pin as output
  pinMode(servopiny,OUTPUT);    // declare the LED's pin as output

  servoy.attach(servopiny); 
  servox.attach(servopinx); 

  // center servos

  servox.write(servocenterx); 
  delay(200);
  servoy.write(servocentery); 
  delay(200);
}

void loop () {
  
}














