/*
@author: Ethan Matusick
@date: 06/09/2026
@purpose: This program calculates the velocity of an object given its distance traveled and time taken, and prints the result to console.
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main()
{ //declare variables to store the distance traveled, time, and velocity
    int distanceTraveled, time, velocity;
    distanceTraveled = 400; //distance traveled in miles
    time = 4; //time in hours

    //calculate the velocity using velocity = distance traveled / time
    velocity = distanceTraveled / time;

    //display the result to the console
    cout << "The velocity of the object is: " << velocity << " mph." << endl;
    return 0;
}