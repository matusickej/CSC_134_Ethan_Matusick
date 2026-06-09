/*
@author: Ethan Matusick
@date: 06/06/2026
@purpose: This program divides a number by zero
*/

//include the iostream library for input and output
#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int quotient = num1 / 0;
    cout << "The quotient of " << num1 << " divided by zero is " << quotient << endl;
    return 0;
}