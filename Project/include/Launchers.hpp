#ifndef LAUNCHERS_HPP
#define LAUNCHERS_HPP

#include "Ballistics.hpp"

class Launchers{
private:
    std::vector<Ballistics> launchers;
    std::size_t numlaunchers = 0;

public:
    void insertlaunchers(Ballistics launcher);
    std::size_t getnumlaunchers() const;
    void printlaunchers();

};

#endif