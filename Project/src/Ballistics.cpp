#include "Ballistics.hpp"

Ballistics::Ballistics(double v0, double teta, double h0):
v0(v0), teta((teta*M_PI)/180.00), h0(h0) {}

Ballistics::~Ballistics(){

}

void Ballistics::calculateFlightTime(){
    
    this->tmax = ((this->v0*sin(this->teta)) +
    sqrt(pow(this->v0*sin(this->teta),2)+2*this->g*this->h0))/this->g;
}

void Ballistics::calculateMaxDistance(){
 
    this->dMax = (pow(this->v0,2)*sin(2*this->teta))/this->g;
}
    
void Ballistics::calculateMaxHeight(){

    this->hMax = this->h0 + (pow(v0*sin(this->teta),2))/(this->g*2);
}

std::vector<double> Ballistics::getvalues() const{
    return this->values;
}

void Ballistics::print(std::vector<double> values){
    
    std::cout << "Initial velocity(m/s): " << values[0] << ".\n";
    std::cout << "Angle of launch(degrees): " << values[1] << ".\n";
    std::cout << "Initial height(m): " << values[2] << ".\n";
    std::cout << '\n';
    std::cout << "Time of flight(sec): " << this->tmax << '\n';
    std::cout << "Maximum distance(m): " << this->dMax << '\n';
    std::cout << "Maximum height(m): " << this->hMax << '\n';
}

void initialize(std::vector<double> &values){

    std::stringstream texts;
    double v0;
    double teta;
    double h0;

    try{
        
        texts << "Initial velocity(m/s): ";
        std::cout << "Initial velocity(m/s): ";
        std::cin >> v0;
        if(v0 < 0 || v0 >= c){
            throw ExceptionVelocity();
        }else{
            values[0] = v0;
            texts << std::fixed << std::setprecision(2) << values[0];
        }
   
    }catch(ExceptionVelocity &e){

        do{
            
            system("cls");
            std::cout << e.what() << '\n';
            sleep(3.5);
            system("cls");
            std::cout << texts.str();
            std::cin >> v0;

        }while(v0 < 0 || v0 >= c);
 
        values[0] = v0;
        texts << std::fixed << std::setprecision(2) << values[0];
    }
    
    try{
        
        texts << "\nAngle of launch(degrees): ";
        std::cout << "Angle of launch(degrees): ";
        std::cin >> teta;
        if(teta < 0 || teta > 90){
            throw ExceptionAngle();
        }else{
            values[1] = teta;
            texts << std::fixed << std::setprecision(2) << values[1];
        }
        
    }catch(ExceptionAngle &e){

        do{
            
            system("cls");
            std::cout << e.what() << '\n';
            sleep(3.5);
            system("cls");
            std::cout << texts.str();
            std::cin >> teta;

        }while(teta < 0 || teta > 90);

        values[1] = teta;
        texts << std::fixed << std::setprecision(2) << values[1];
    }

    try{

        texts << "\nInitial height(m): ";
        std::cout << "Initial height(m): ";
        std::cin >> h0;
        if(h0 < 0 || h0 > ht){
            throw ExceptionHeight();
        }else{
            values[2] = h0;
            texts << std::fixed << std::setprecision(2) << values[2];
        }
                
    }catch(ExceptionHeight &e){

        do{

            system("cls");
            std::cout << e.what() << '\n';
            sleep(3.5);
            system("cls");
            std::cout << texts.str();
            std::cin >> h0;

        }while(h0 < 0 || h0 > ht);
        
        values[2] = h0;
        texts << std::fixed << std::setprecision(2) << values[2];
    }

    system("cls");
}

void line(){
    
    std::cout << "\n------------ // ------------\n\n";
}