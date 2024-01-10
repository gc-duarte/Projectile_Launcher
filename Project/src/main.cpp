#include "Ballistics.hpp"

int main(){
    
    std::cout << "\n------------ // ------------\n\n";
    
    std::vector<double> values;
    values.resize(3);
    initialize(values);
    Ballistics T1(values.at(0),values.at(1),values.at(2));
    T1.calculateFlightTime();
    T1.calculateMaxDistance();
    T1.calculateMaxHeight();
    T1.print();
    
    std::cout << "\n------------ // ------------\n\n";
    
    return 0;  
}