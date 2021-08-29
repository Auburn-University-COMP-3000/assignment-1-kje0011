#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
    // constants and variables
    double weight;
    double radius;
    const double water = 62.4;
    double bouyant;
    double volume;
    double specificGravity;
    
    // inputs
    cout << "Input weight of the sphere in pounds." << endl;
    cin >> weight;

    cout << "Input radius of the sphere in feet." << endl;
    cin >> radius;
    
    // calculations
    volume = 4.0/3.0 * 3.14 * radius*radius*radius;
    specificGravity = weight/water;
    bouyant = volume * specificGravity;

    // outputs
    if (bouyant >= weight)
    {
        cout << "The sphere will float in water.";
    }
    else
    {
        cout << "The sphere will sink in water.";
    }
    return 0;
}