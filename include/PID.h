#pragma once
#include "cmath"
#include "vex.h"
#include "motors.h"

namespace _PID {
    double position;
    double error;
    double i; // integral
    double d;
    int target;
    double kp = 0.5;
    double ki = 0;
    double kd = 0.1;
    double drive;
    void runPID();
    double prev;
    int _time = 0;
    bool errorChanging = true;
}

using namespace _PID;
class PID
{
    
public:
    PID();

    void reset();

    void update();

    bool isStopped();

    void runPID(double targetVal, double timeLimit);
};
