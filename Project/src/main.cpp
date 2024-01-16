#include "Launchers.hpp"

int main(){

    system("cls");
    Launchers L;
    std::string command;
    std::cout << "In order to start the program, type \"begin\": ";
    std::vector<double> values(3,0);
    std::getline(std::cin, command);
    while(command == "begin"){

        system("cls");
        std::cout << "Which command?\n-> launch\n-> end\n\n---> ";
        do{
            
            std::cin >> command;
            if(command == "launch"){
                
                system("cls");
                initialize(values);
                Ballistics B(values[0],values[1],values[2]);
                B.calculateFlightTime();
                B.calculateMaxDistance();
                B.calculateMaxHeight();
                B.print(values);
                L.insertlaunchers(B);
            }

             if(command != "end"){
                
                std::cout << "\n# ";
                system("pause");
            }
            
            system("cls");
            
            if(command != "end"){
                
                std::cout << "Which command?\n-> launch\n-> end\n\n---> ";
            }

        }while(command != "end");
    }

    L.printlaunchers();
    std::cout << "--> Number of launchers: " << L.getnumlaunchers() << "\n\n";
    std::cout << "\n# ";
    system("pause");
}