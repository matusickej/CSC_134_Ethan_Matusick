/*
@author: Ethan Matusick
@date: 06/09/2026
@purpose: This program calculates the distance traveled by an object given its speed and time, and prints the result to console.
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main() 
{ //declare variables to store the velocity, time, and distance traveled
    int velocity, time, distanceTraveled;
    velocity = 80; //velocity in mph
    time = 2; //time in hours

    //calculate the distance traveled using distance traveled = velocity * time
    distanceTraveled = velocity * time;

    //display the result to the console
    cout << "The object has traveled: " << distanceTraveled << " miles." << endl;
    return 0;
}