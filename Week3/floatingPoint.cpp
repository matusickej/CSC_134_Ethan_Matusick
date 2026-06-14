/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program will add two floating point numbers together and print the result to the console.
*/

//include the required prerequisite libraries
#include <iostream>
#include <cmath>
using namespace std;

int main()
{//declare float variables and assign them values
    float num1 = 3.1415;
    float num2 = 247.91;

//print the sum of the two float variables to the console
    cout << "The sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    return 0;
}