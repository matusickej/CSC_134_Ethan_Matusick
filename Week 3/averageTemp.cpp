/*
@author: Ethan Matusick
@date: 06/10/2026
@purpose: This program calculates the average temperature from New York City, Denver, and Phoenix, and calculates a raise in temperature by 2 percent then prints the results to console.
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{ //declare variables for the average temperatures of the three cities
    int nycTemp, denverTemp, phoenixTemp; 
    double nycTempNew, denverTempNew, phoenixTempNew;

    //assign average temperature in fahrenheit to three city variables
    nycTemp = 85;
    denverTemp = 88;
    phoenixTemp = 106;

    //calculate the new temperatures after the 2% temperature increase
    nycTempNew = nycTemp * 1.02;
    denverTempNew = denverTemp * 1.02;
    phoenixTempNew = phoenixTemp * 1.02;

    //display the results to the console
    cout << "\n";
    cout << "*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*\n";
    cout << "| The average July high temperatures for the cities are: |" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|         - New York City: " << nycTemp << " degrees Fahrenheit.        |" << endl;
    cout << "|         - Denver: " << denverTemp << " degrees Fahrenheit.               |" << endl;
    cout << "|         - Phoenix: " << phoenixTemp << " degrees Fahrenheit.             |" << endl;
    cout << "|========================================================|\n";
    cout << "|    If the temperature were to increase by 2 percent,   |" << endl;
    cout << "|    the new average July high temperatures would be:    |" << endl;
    cout << "|~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << "|         * New York City: " << nycTempNew << " degrees Fahrenheit.      |" << endl;
    cout << "|         * Denver: " << denverTempNew << " degrees Fahrenheit.            |" << endl;
    cout << "|         * Phoenix: " << phoenixTempNew << " degrees Fahrenheit.          |" << endl;
    cout << "*========================================================*\n";
    return 0;
}