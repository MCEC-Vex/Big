/*

Class created to oversee all of the functions/code for the autonomous period

*/


#ifndef AUTON_H
#define AUTON_H


#include "api.h"
#include "okapi/api.hpp"

#define LEFT_PORT 10
#define RIGHT_PORT 9
#define TOP_LEFT 1
#define TOP_RIGHT 2
#define BOTTOM_RIGHT 3
#define BOTTOM_LEFT 4
#define MOTOR_BELT 13

#define VISION_SENSOR 18
#define EXAMPLE_SIG 1
#define NUM_VISION_OBJECTS 1

#define ULTRA_PING 'A'
#define ULTRA_ECHO 'B'
// directions the 2 motors powering the lifter move in
#define LEFT_DIRECTION 0
#define RIGHT_DIRECTION 1

// gearset and encoder units of the two motors
#define GEARSET pros::E_MOTOR_GEARSET_36    // red motor gearset: 100 rpm
#define MTR_UNITS pros::E_MOTOR_ENCODER_DEGREES // motor calculates in degrees

class Auton { //Short for 'autonomous'

public:

Auton(); // default constructor

//functions
void test(); //test drive function
void distance(); //Grab mogo at the start
void rotate();
void motortest();
void visiontest();
void ultrasonic();

private:

// motor pointers
pros::Motor* arm_left;
pros::Motor* arm_right;
pros::Motor* t_left; //top left wheel
pros::Motor* t_right;
pros::Motor* b_left; //bottom left wheel
pros::Motor* b_right;
pros::Motor* belt;



};


#endif
