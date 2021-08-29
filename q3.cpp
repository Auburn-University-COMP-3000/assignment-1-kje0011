#include <iostream>
#include <string>

using namespace std;

int main() {
    // constants and variables
    const int acc = 32; 
    int t;
    int distance;

    // inputs
    cout << "Enter a time in seconds." << endl;
    cin >> t;

    // calculation
    distance = (acc/2) * t*t;

    // output
    cout << "An object in freefall for " << t 
    << " seconds will fall " << distance << " feet.";

    return 0;
}