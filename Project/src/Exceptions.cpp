#include "Exceptions.hpp"

const char* ExceptionVelocity::what() const throw(){

    return "-> Error: choose a number in the interval [0,2.99e8] for the initial velocity!";
}

const char* ExceptionAngle::what() const throw(){

    return "-> Error: choose a number in the interval [0,90] for the angle!";
}

const char* ExceptionHeight::what() const throw(){

    return "-> Error: choose a number in the interval [0,6.37e6] for the initial height.";
}