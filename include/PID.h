#pragma once
#include "cmath"
#include "vex.h"
#include "motors.h"

/*namespace _PID {
    extern double position;
    extern double error;
    extern double i; // integral
    extern double d;
    extern int target;
    extern double kp;
    extern double ki;
    extern double kd;
    extern double drive;
    extern void runPID();
    extern double prev;
    extern int _time;
    extern bool errorChanging;
}*/

//using namespace _PID;
class PID
{

    double position;
    double error;
    double i; // integral
    double d;
    int target;
    double kp;
    double ki;
    double kd;
    double drive;
    void runPID();
    double prev;
    int _time;
    bool errorChanging;
    
public:
    PID();

    void reset();

    void update();

    bool isStopped();

    void runPID(double targetVal, double timeLimit);
};
