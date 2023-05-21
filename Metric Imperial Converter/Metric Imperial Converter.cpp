#include <iostream>
#include <string>

#include <iostream>
#include <string>

void MetricImperialConverter() {
    std::string selected;
    double cm, meters, result, km, kg, ml, l, foot, miles, ounces, pounds, stone, pints;

    std::cout << "Type (m) to convert to metric or type (i) to convert to imperial" << std::endl;
    std::cin >> selected;

    if (selected == "m" || selected == "M") {
        std::cout << "Type (l) for length conversion. Type (m) for mass conversion. Type (c) for capacity conversion." << std::endl;
        std::cin >> selected;
        if (selected == "l" || selected == "L") {
            std::cout << "Type (m) for meters conversion. Type (km) for kilometer conversion." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'm':
                    std::cout << "How many feet?" << std::endl;
                    std::cin >> foot;
                    result = foot * 0.3048;
                    std::cout << result << " meters" << std::endl;
                    break;
                case 'k':
                    std::cout << "How many miles?" << std::endl;
                    std::cin >> miles;
                    result = miles * 1.609344;
                    std::cout << result << " kilometers" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
        else if (selected == "m" || selected == "M") {
            std::cout << "Type (g) for gram conversion. Type (k) for kg conversion. Type (t) for ton conversion." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'g':
                    std::cout << "How many ounces?" << std::endl;
                    std::cin >> ounces;
                    result = ounces * 28.349523125;
                    std::cout << result << " grams" << std::endl;
                    break;
                case 'k':
                    std::cout << "How many pounds?" << std::endl;
                    std::cin >> pounds;
                    result = pounds * 0.45359237;
                    std::cout << result << " kilograms" << std::endl;
                    break;
                case 't':
                    std::cout << "How many stone?" << std::endl;
                    std::cin >> stone;
                    result = stone * 0.007;
                    std::cout << result << " tons" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
        else if (selected == "c" || selected == "C") {
            std::cout << "Type (l) for liter conversion. Type (dm) for decimeter conversion. Type (cl) for centiliter conversion." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'l':
                    std::cout << "How many pints?" << std::endl;
                    std::cin >> pints;
                    result = pints * 0.473176473;
                    std::cout << result << " liters" << std::endl;
                    break;
                case 'cl':
                    std::cout << "How many ounces?" << std::endl;
                    std::cin >> ounces;
                    result = ounces * 2.95735296;
                    std::cout << result << " centiliters" << std::endl;
                    break;
                case 'dm':
                    std::cout << "How many ounces?" << std::endl;
                    std::cin >> ounces;
                    result = ounces * 0.295735296;
                    std::cout << result << " decimeters" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
    }
    else if (selected == "i" || selected == "I") {
        std::cout << "Type (l) for length conversion. Type (m) for mass conversion. Type (c) for capacity conversion." << std::endl;
        std::cin >> selected;
        if (selected == "l" || selected == "L") {
            std::cout << "Type (i) for inches. Type (f) for foot. Type (y) for yard. Type (m) mile." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'i':
                    std::cout << "How many cm?" << std::endl;
                    std::cin >> cm;
                    result = cm / 2.54;
                    std::cout << result << " inches" << std::endl;
                    break;
                case 'f':
                    std::cout << "How many cm?" << std::endl;
                    std::cin >> cm;
                    result = 1 / 2.54 / 12;
                    std::cout << result << " feet" << std::endl;
                    break;
                case 'y':
                    std::cout << "How many meters?" << std::endl;
                    std::cin >> meters;
                    result = meters / 0.9144;
                    std::cout << result << " yards" << std::endl;
                    break;
                case 'm':
                    std::cout << "How many km?" << std::endl;
                    std::cin >> km;
                    result = km / 1.609344;
                    std::cout << result << " miles" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
        else if (selected == "m" || selected == "M") {
            std::cout << "Type (p) for pounds. Type (s) for stone." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'p':
                    std::cout << "How many kg?" << std::endl;
                    std::cin >> kg;
                    result = kg / 0.45359237;
                    std::cout << result << " pounds" << std::endl;
                    break;
                case 's':
                    std::cout << "How many kg?" << std::endl;
                    std::cin >> kg;
                    result = kg * 0.1575;
                    std::cout << result << " stone" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
        else if (selected == "c" || selected == "C") {
            std::cout << "Type (floz) for fluid ounces. Type (p) for pints. Type (g) for gallons." << std::endl;
            std::cin >> selected;
            switch (selected[0]) {
                case 'floz':
                    std::cout << "How many mL?" << std::endl;
                    std::cin >> ml;
                    result = ml * 0.033814;
                    std::cout << result << " fluid ounces" << std::endl;
                    break;
                case 'p':
                    std::cout << "How many L?" << std::endl;
                    std::cin >> l;
                    result = l * 2.113376;
                    std::cout << result << " pints" << std::endl;
                    break;
                case 'g':
                    std::cout << "How many L?" << std::endl;
                    std::cin >> l;
                    result = l * 0.264172;
                    std::cout << result << " gallons" << std::endl;
                    break;
                default:
                    std::cout << "You did something wrong. Try again." << std::endl;
                    MetricImperialConverter();
                    break;
            }
        }
        else {
            std::cout << "You did something wrong. Try again." << std::endl;
        }
    }
    else {
        std::cout << "You did something wrong. Try again." << std::endl;
    }
}

int MetricImperialMain() {
    MetricImperialConverter();
    return 0;
}
