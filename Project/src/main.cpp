#include "Ballistics.hpp"

int main(){
    
    line();

    initial values(3);
    initialize(values);
    Ballistics T1(values[0],values[1],values[2]);
    T1.calculateFlightTime();
    T1.calculateMaxDistance();
    T1.calculateMaxHeight();
    T1.print();

    line();
    system("pause<0");
}