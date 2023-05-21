#include <iostream>

void FrequencyConverter(){
    char input;
    double value;

    std::cout << "What frequency would you like to convert from (h) for hertz (kh) for kilohertz (mh) for megahertz (gh) for gigahertz and (th) for terahertz: ", std::cin >> input;
    std::cout << "What is the frequency you would like to convert? ", std::cin >> value;

    switch (toupper(input)) {
        case 'H':
            std::cout << value << " hertz, " << value/1000 << " kilohertz, " << value/100000 << " megahertz, " << value/1000000000 << " gigahertz, " << value/1000000000000 << " terahertz\n";
            break;
        case 'K':
            std::cout << value << " kilohertz, " << value/1000 << " megahertz, " << value/100000 << " gigahertz, " << value/1000000000 << " terahertz, " << value*1000 << " hertz\n";
            break;
        case 'M':
            std::cout << value << " megahertz, " << value/1000 << " gigahertz, " << value/100000 << " terahertz, " << value*1000000 << " hertz, " << value*1000 << " kilohertz\n";
            break;
        case 'G':
            std::cout << value << " gigahertz, " << value/1000 << " terahertz, " << value*1000000000 << " hertz, " << value*1000000 << " kilohertz, " << value*1000 << " megahertz\n";
            break;
        case 'T':
            std::cout << value << " terahertz, " << value*1000000000000 << " hertz, " << value*1000000000 << " kilohertz, " << value*1000000 << " megahertz, " << value*1000 << " gigahertz\n";
            break;
        default:
            std::cout << "Please enter one of the options below.\n";
            FrequencyConverter();
            break;
    }
}

int FrequencyConverterMain(){
    FrequencyConverter();
    return 0;
}
