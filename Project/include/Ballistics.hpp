#ifndef BALLISTICS_HPP
#define BALLISTICS_HPP

#include "Exceptions.hpp"

class Ballistics{
private:
    const double g = 9.81;                         // (m/s²)
    std::vector<double> values;                   // v0, teta, h0
    double dMax;                                 // (m)
    double v0;                                  // (m/s)
    double hMax;                               // (m)
    double teta;                              // (degrees)
    double h0;                               // (m)
    double tmax;                            // (sec)

public:
    Ballistics(double v0, double teta, double h0);
    ~Ballistics();
    
    void calculateMaxDistance();
    void calculateFlightTime();
    void calculateMaxHeight();
    std::vector<double> getvalues();

    void print(std::vector<double> values);

};

void initialize(std::vector<double> &values);

void line();

#endif