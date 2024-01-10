#ifndef BALLISTICS_HPP
#define BALLISTICS_HPP

#include <iostream>
#include <vector>
#include <cmath>

using gravity = const double; 
using velocity = double;
using distance = double;
using height = double;
using angle = double;
using time = double;

class Ballistics{
private:
    gravity g = 9.81;          // (m/s²)
    distance dMax;             // (m)
    velocity v0;               // (m/s)
    height hMax;               // (m)
    angle teta;                // (degrees)
    height h0;                 // (m)
    time tmax;                 // (sec)

public:
    Ballistics(velocity v0, angle teta, height h0);
    ~Ballistics();
    const void calculateMaxDistance();
    const void calculateFlightTime();
    const void calculateMaxHeight();
    const void print();

};

const void initialize(std::vector<double> &values);

#endif