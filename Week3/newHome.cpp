/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program will calculate the square footage of a new home and print the result to the console.
*/

//include the required prerequisite libraries
#include <iostream>
using namespace std;

int main()
{//declare variables and assign them length and width values
    int length = 50;
    int width = 32;

//print the square footage of the new home to the console
    cout << "The square footage of the new home is: " << length * width << " sq. ft." << endl;
    return 0;
}