/*
@author: Ethan Matusick
@date: 06/12/2026
@purpose: This program will use the c++ string class to concatenate three strings together and print the result to the console.
*/

//include the required prerequisite libraries
#include <iostream>
#include <string>
using namespace std;

int main()
{//declare string variables and assign string literals to them
    string verbiage, age, verbiage_end;

    verbiage = "Today I am ";
    age = "25";
    verbiage_end = " years old!";

//concatenate the string variables together and print the result to the console
    string full_sentence = verbiage + age + verbiage_end;
    cout << full_sentence << endl;
    return 0;
}