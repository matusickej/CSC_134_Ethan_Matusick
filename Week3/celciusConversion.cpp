/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program converts degrees Fahrenheit into degrees Celcius then prints the result to the console.
*/

//include the pre-requisite libraries
#include <iostream>
#include <cmath>
using namespace std;

int main()
{//declare temperature variables
    float tempFahrenheit, tempCelcius;

//assign tempFahrenheit to user input
    cout << "Enter the degrees fahrenheit: \n";
    cin >> tempFahrenheit;

//calculate tempCelcius
    tempCelcius = (tempFahrenheit-32) * 5/9;

//print tempCelcius to console
    cout << tempFahrenheit << " is " << tempCelcius << " degrees Celcius \n";
    return 0;
}