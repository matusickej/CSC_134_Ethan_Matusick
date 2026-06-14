/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program calculates the area of a circle then prints the result to the console.
*/

//include the pre-requisite libraries
#include <iostream>
#include <cmath>
using namespace std;

int main()
{ //declare equations required variables and assign them values
    float area, pi, radius;
    pi = 3.1415;
    radius = 19;

//plug into area = pi * radius * radius formula
    area = pi * radius * radius;

//print result to console
    cout << "the area of a circle with a radius of " << radius << " is: " << area << " square ft. \n";
    return 0;
}