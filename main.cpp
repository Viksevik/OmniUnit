#include "Temp Converter/Temp Conversion.h"
#include "Metric Imperial Converter/Metric Imperial Converter.h"
#include <iostream>

void choice(){
    char choice;
    std::cout << "Type (mi) to convert Metric to imperial, type (t) to convert temperature: ", std::cin >> choice, std::cin.ignore();

    switch (toupper(choice)) {
        case 'M':
            MetricImperialMain();
            break;
        case 'T':
            TempConversionMain();
            break;
        default:
            std::cout << "Type one of the options above.";
            break;
    }
}

int main(){
    int loops = 0;
    bool running = true;
    std::string input;
    while(running) {
        if (loops > 0) {
            std::cout << "if you would like to continue type (y) if otherwise press ENTER to EXIT: ";

            std::getline(std::cin,input);

            if(input == "y" || input == "Y"){
                CalculateTemp();
            }
            else {
                running = false;
                std::cout << "Program ended.";
                break;
            }
        }
        else {
            loops++;
            choice();
        }
    }
}

