#include <iostream>

int Calculate(){
    int Temp;
    char Metric;
    std::cout << "type (f) to convert from Fahrenheit, type (c) to convert from Celsius or Centigrade, type (k) to convert from Kelvin and type (r) to convert from Rankine: ", std::cin >> Metric;
    std::cout << "What temperature would you like to convert? ", std::cin >> Temp;

    switch(toupper(Metric)){
        // If the input is equal to the decimal version of uppercase F
        case 70:
            std::cout << Temp << " Fahrenheit, " << (Temp-32)*.5556 << " Celsius, " << (Temp-32)*5/9+273.15 << " Kelvin, " << Temp+459.67 << " Rankine";
            break;

            // If the input is equal to the decimal version of uppercase C
        case 67:
            std::cout << Temp << " Celsius, " << Temp+273.15 << " Kelvin, " << Temp*9/5+491.67 << " Rankine, " << (Temp*9/5)+32 << " Fahrenheit";
            break;

            // If the input is equal to the decimal version of uppercase K
        case 75:
            std::cout << Temp << " Kelvin, " << Temp*9/5 << " Rankine, " << (Temp-273.15)*9/5+32 << " Fahrenheit, " << Temp-273.15 << " Celsius";
            break;

            // If the input is equal to the decimal version of uppercase R
        case 82:
            std::cout << Temp << " Rankine, " << Temp-459.67 << " Fahrenheit, " << (Temp-491.67)*5/9 << " Celsius, " << Temp*5/9 << " Kelvin";
            break;

        default:
            break;
    }
}


int main(){
    bool running = true;
    int loops = 0;
    std::string input;
    while(running){
        if(loops>0) {
            std::cout << "\nIf you would you like to continue type (y), if not press enter to exit: ";
            std::cin.ignore();
            std::getline(std::cin,input);
            if(input == "y"){
                Calculate();
            }
            else {
                running = false;
                std::cout << "Program ended.";
                break;
            }
        }
        else {
            // Starts the program the first time the program is run
            loops++;
            Calculate();
        }
    }
}

