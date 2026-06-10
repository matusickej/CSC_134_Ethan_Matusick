/*
@author: Ethan Matusick
@date: 06/06/2026
@purpose: This program calculates the voltage given the current and resistance, and prints the result to console.
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{ //declare variables to store the amperage, resistance and voltage
    int amps, resistance, voltage;
    amps = 10; //current in amps
    resistance = 2; //resistance in ohms

    //calculate the voltage using voltage = current * resistance
    voltage = amps * resistance;

    //display the result to the console
    cout << "The current voltage is: " << voltage << " volts." << endl;
    return 0;
}