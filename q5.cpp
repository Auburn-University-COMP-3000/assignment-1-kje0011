#include <iostream>
#include <string>

using namespace std;

int main() {
    // constants and variables
    int celsius;
    int fahrenheit;
    int count;  

    celsius = 100;

    while (celsius != fahrenheit)
    {
        fahrenheit = 32 + 9.0/5.0 * celsius;
        celsius--;
    }
    cout << "Celsius = " << celsius << endl;
    cout << "Fahrenheit = " << fahrenheit;
}