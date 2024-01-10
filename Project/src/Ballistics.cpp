#include "Ballistics.hpp"

Ballistics::Ballistics(velocity v0, angle teta, height h0):
v0(v0), teta(teta), h0(h0) {}

Ballistics::~Ballistics(){

}

const void Ballistics::calculateFlightTime(){
    
    angle aux = (this->teta*M_PI)/180.00;
    this->tmax = ((this->v0*sin(aux)) +
    sqrt(pow(this->v0*sin(aux),2)+2*this->g*this->h0))/this->g;
}

const void Ballistics::calculateMaxDistance(){

    angle aux = (this->teta*M_PI)/180.00; 
    this->dMax = (pow(this->v0,2)*sin(2*aux))/this->g;
}
    
const void Ballistics::calculateMaxHeight(){

    angle aux = (this->teta*M_PI)/180.00;
    this->hMax = this->h0 + (pow(v0*sin(aux),2))/(this->g*2);
}

const void Ballistics::print(){
    
    std::cout << '\n';
    std::cout << "Time of flight(tmax): " << this->tmax << " s.\n";
    std::cout << "Maximum distance(dMax): " << this->dMax << " m.\n";
    std::cout << "Maximum height(hMax): " << this->hMax << " m.\n";
}

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