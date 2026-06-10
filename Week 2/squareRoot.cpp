/*
@author: Ethan Matusick
@date: 06/06/2026
@purpose: This program calculates the square root of a real number and prints the result to console.
*/

//include the required directives/libraries for this program
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{ //declare variables to store the user's input number and the resulting square root
    double num, result;

//assign the num variable to the user's input number
    cout << "Enter a real number: ";
    cin >> num;

//calculate the square root of the input number
    result = sqrt(num);

//print the result to the console
    cout << "The square root of " << num << " is " << result << "." << endl;

    return 0;
}