/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program calculates the volume of a sphere then prints the result to the console.
*/

//include the pre-requisite libraries
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{//declare variables and assign values
    double volume, pi, radius;
    pi = 3.1415;
    radius = 7;

//plug into spherical volume equation
    volume = (4.0/3) * pi * (radius * radius * radius);

//print result to console
    cout << "The volume of a sphere with the radius of " << radius << " is: " << volume << " units. \n";
    return 0;
}