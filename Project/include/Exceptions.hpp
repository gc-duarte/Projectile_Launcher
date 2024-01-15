#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include "Definitions.hpp"

class ExceptionVelocity: public std::exception{
public:
    virtual const char* what() const throw();

};

class ExceptionAngle: public std::exception{
public:
    virtual const char* what() const throw();

};

class ExceptionHeight: public std::exception{
public:
    virtual const char* what() const throw();

};

#endif