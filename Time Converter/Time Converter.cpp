#include <iostream>

using namespace std;

void TimeConversion() {
    string ttype;
    double min, result, hours, days, weeks, months, years;
    cout << "Type (s), (m), (h), (d), (w), (M), (y) for second, minute, hour, day, week, month and year conversion." << endl;
    cin >> ttype;

    switch (ttype[0]) {
        case 's':
            cout << "How many minutes?" << endl;
            cin >> min;
            result = min * 60;
            cout << result << " seconds" << endl;
            break;
        case 'm':
            cout << "How many hours?" << endl;
            cin >> hours;
            result = hours * 60;
            cout << result << " minutes" << endl;
            break;
        case 'h':
            cout << "How many days?" << endl;
            cin >> days;
            result = days * 24;
            cout << result << " hours" << endl;
            break;
        case 'd':
            cout << "How many weeks?" << endl;
            cin >> weeks;
            result = weeks * 7;
            cout << result << " days" << endl;
            break;
        case 'w':
            cout << "How many months?" << endl;
            cin >> months;
            result = months * 4.34812141;
            cout << result << " weeks" << endl;
            break;
        case 'M':
            cout << "How many years?" << endl;
            cin >> years;
            result = years * 12.25;
            cout << result << " months" << endl;
            break;
        case 'y':
            cout << "How many hours?" << endl;
            cin >> hours;
            result = hours / 8766;
            cout << result << " years" << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }
}

int TimeConversionMain() {
    TimeConversion();
    return 0;
}