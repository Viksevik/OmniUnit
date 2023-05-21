#include <iostream>
#include "Time Converter/Time Converter.h"
#include "Temp Converter/Temp Conversion.h"
#include "Metric Imperial Converter/Metric Imperial Converter.h"
#include "Frequency Converter/Frequency Converter.h"


void choice(){
    char input;
    std::cout << "(mi) for Metric to imperial, (t) for temperature conversion, (f) for frequency conversion, (T) for time conversion: ", std::cin >> input, std::cin.ignore();
    switch (input) {
        case 'm':
            MetricImperialMain();
            break;
        case 74:
            TempConversionMain();
            break;
        case 'f':
            FrequencyConverterMain();
            break;
        case 'T':
            TimeConversionMain();
            break;
        default:
            std::cout << "Type one of the options below.\n";
            choice();
            break;
    }
}

int main(){
    int loops = 0;
    bool running = true;
    std::string input;
    while(running) {
        if (loops > 0) {
            std::cin.ignore();
            std::cout << "if you would like to continue type (y) if otherwise press ENTER to EXIT: ";

            std::getline(std::cin,input);

            if(input == "y" || input == "Y"){
                choice();
            }
            else {
                running = false;
                std::cout << "\nProgram ended.";
                break;
            }
        }
        else {
            loops++;
            choice();
        }
    }
}

