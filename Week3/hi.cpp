/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program will print a character string representation of "Hi!" to the console.
*/

//include the required prerequisite libraries
#include <iostream>
using namespace std;

int main()
{//declare char variables and assign ASCII values to them
    char letter = 72; //ASCII value for 'H'
    char letter2 = 105; //ASCII value for 'i'
    char letter3 = 33; //ASCII value for '!'

//print the ASCII values to the console using the char variables
    cout << letter << letter2 << letter3 << endl;
    return 0;
}