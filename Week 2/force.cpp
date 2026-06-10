/*
@author: Ethan Matusick
@date: 06/09/2026
@purpose: This program calculates the force given the mass and acceleration, and prints the result to console.
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{ //declare variables to store mass, acceleration and force
    int mass;
    double force, acceleration;
    mass = 10; //mass in kg
    acceleration = 9.81; //acceleration in m/s^2
    
    //calculate the force using force = mass * acceleration
    force = mass * acceleration;

    //display the result to the console
    cout << "The acting force is : " << force << " newtons." << endl;
    return 0;
}