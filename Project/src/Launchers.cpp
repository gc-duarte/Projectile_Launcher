#include "Launchers.hpp"

void Launchers::insertlaunchers(Ballistics launcher){

    this->launchers.push_back(launcher);
    this->numlaunchers += 1;
}

std::size_t Launchers::getnumlaunchers() const{

    return this->numlaunchers;
}

void Launchers::printlaunchers(){
    
    line();
    for(std::size_t i = 0;i < this->numlaunchers;++i){
        this->launchers.at(i).print(this->launchers.at(i).getvalues());
        line();
    }
}