#include <iostream>
using namespace std;

int main() {
    float temp;
    char unit;
    cout << "Enter temperature (e.g., 36.6C or 97.8F): ";
    cin >> temp >> unit;

    if (unit == 'C' || unit == 'c')
        cout << "Fahrenheit: " << (temp * 9/5 + 32) << "°F\n";
    else if (unit == 'F' || unit == 'f')
        cout << "Celsius: " << ((temp - 32) * 5/9) << "°C\n";
    else
        cout << "❌ Unknown unit!\n";
}
