#ifndef BALLISTICS_HPP
#define BALLISTICS_HPP

#include "Definitions.hpp"

class Ballistics{
private:
    gravity g = 9.81;           // (m/s²)
    distance dMax;              // (m)
    velocity v0;                // (m/s)
    height hMax;                // (m)
    angle teta;                 // (degrees)
    height h0;                  // (m)
    time tmax;                  // (sec)

public:
    Ballistics(velocity v0, angle teta, height h0);
    ~Ballistics();
    void calculateMaxDistance();
    void calculateFlightTime();
    void calculateMaxHeight();
    void print() const;

};

void initialize(std::vector<double> &values);

void line();

#endif