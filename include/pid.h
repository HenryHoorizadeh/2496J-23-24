 #include "api.h"
#include "main.h"
#include "okapi/api.hpp"
#include "pros/api_legacy.h"

//header guards
#ifndef PIDH
#define PIDH

// extern void setConstants(float kp, float ki, float kd);
extern void resetEncoders();
// extern void chasMove(int voltageLF, int voltageLB, int voltageRF, int voltageRB);
// extern float calcPID(int target, float input, int integralKi, int maxI);

extern void driveStraight(int target);
extern void setConstants(double kp, double ki, double kd);
extern double calcPID(double target, double input, int integralKi, int maxIntegral, bool slewOn);
extern double calcPID2(double target, double input, int integralKi, int maxIntegral, bool slewOn);
extern void driveStraight2(int target);
extern void driveStraightC(int target);
extern void driveTurn(int target);
extern void driveTurn2(int target);
extern void driveAim(int target);
extern void driveSlow(int target);
extern void driveSmall(int target);
extern void driveShoot(int target);
extern void chasMove(int voltageLF, int voltageLB, int voltageLM, int voltageRF, int voltageRB, int voltageRM);
extern void driveArcL(double theta, double radius, int timeout);
extern void driveArcLF(double theta, double radius, int timeout);
extern void driveArcR(double theta, double radius, int timeout);
extern void driveArcRF(double theta, double radius, int timeout);
extern int time2;
extern int time22;
extern float error;
extern float error2;
extern float viewvol;
extern double heading_error;
extern double lift_target;
extern bool tempre;
extern bool temp_lift;
extern int integral;
extern double variKDP;
//hello

//tune straight constants here: setConstants(STRAIGHT_KP, STRAIGHT_KI, STRAIGHT_KD);
#define STRAIGHT_KP 0.95 // 0.95
#define STRAIGHT_KI 0.05 // 0.025
#define STRAIGHT_KD 8.05  // 7.75

//tune straight integral-specific here: voltage = calcPID(target, encoderAvg, STRAIGHT_INTEGRAL_KI, STRAIGHT_MAX_INTEGRAL);
#define STRAIGHT_INTEGRAL_KI 40
#define STRAIGHT_MAX_INTEGRAL 14.5


//tune turn constants here: setConstants(TURN_KP, TURN_KI, TURN_KD);
#define TURN_KP 8.50 //5.25//8.75
#define TURN_KI 0.115 //0.125//0.115
#define TURN_KD 102 //38 //105 //70

//tune turn integral-specific here: voltage = calcPID(target, position, TURN_INTEGRAL_KI, TURN_MAX_INTEGRAL);
#define TURN_INTEGRAL_KI 30
#define TURN_MAX_INTEGRAL 25

#endif