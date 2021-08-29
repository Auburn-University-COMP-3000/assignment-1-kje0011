#include <iostream>
#include <string>

using namespace std;

int main() {
    // constants and variables
    int celsius = 100;
    int fahrenheit;
    int count;  

    // calculations
    while (celsius != fahrenheit)
    {
        fahrenheit = 32 + 9.0/5.0 * celsius;
        celsius--;
    }

    // output
    cout << "Celsius = " << celsius << endl;
    cout << "Fahrenheit = " << fahrenheit << endl;

    return 0;
}