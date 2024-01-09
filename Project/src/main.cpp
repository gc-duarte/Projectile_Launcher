#include "Ballistics.hpp"

const void initialize(std::vector<double> &values){

    velocity v0;
    angle teta;
    height h0;
    
    std::cout << "Initial velocity(v0): ";
    std::cin >> v0;
    values.at(0) = v0;
    //std::cout << " m/s.\n";
    std::cout << "Angle of launch(teta): ";
    std::cin >> teta;
    values.at(1) = teta;
    //std::cout << " deg.\n";
    std::cout << "Initial height(h0): ";
    std::cin >> h0;
    values.at(2) = h0;
    //std::cout << " m.\n";
}

int main(){
    
    std::vector<double> values;
    values.resize(3);
    initialize(values);
    Ballistics T1(values.at(0),values.at(1),values.at(2));
    T1.calculateFlightTime();
    T1.calculateMaxDistance();
    T1.calculateMaxHeight();
    T1.print();

    std::cout << "\n------------ // ------------\n\n";

    initialize(values);
    Ballistics T2(values.at(0),values.at(1),values.at(2));
    T2.calculateFlightTime();
    T2.calculateMaxDistance();
    T2.calculateMaxHeight();
    T2.print();

    std::cout << "\n------------ // ------------\n\n";
    
    initialize(values);
    Ballistics T3(values.at(0),values.at(1),values.at(2));
    T3.calculateFlightTime();
    T3.calculateMaxDistance();
    T3.calculateMaxHeight();
    T3.print();
    
    std::cout << "\n------------ // ------------\n\n";
    
    return 0;  
}