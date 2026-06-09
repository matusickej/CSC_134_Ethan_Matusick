/*
@author: Ethan Matusick
@date: 06/06/2026
@purpose: This program displays the user's favorite movie and it's main character's name's neatly to the console.
*/

//include the iostream library for input and output, and the string library to use the string data type
#include <iostream>
#include <string>
using namespace std;

int main() 
{ //declare string to store the user's favorite movie
    string favoriteMovie;

//assign the favoriteMovie string to the user's input string literal
    favoriteMovie = "The Bridge on The River Kwai";

//display the user's input neatly into the console
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " [                         My Favorite Movie!                     ]\n";
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout <<  "                     " << favoriteMovie << endl;
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " [@@@@@@@@@@@@@@@@@@@@@-@_=-MAIN CHARACTERS-=_@-@@@@@@@@@@@@@@@@@@]\n";
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << " |         Actor's Name          ~|/|~        Character Name      |\n";
    cout << " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << " |  William Holden               ~|/|~                     Shears |\n";
    cout << " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << " |  Alec Guinness                ~|/|~          Colonel Nicholson |\n";
    cout << " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << " |  Jack Hawkins                 ~|/|~               Major Warden |\n";
    cout << " |~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~|\n";
    cout << " |  Sessue Hayakawa              ~|/|~              Captain Saito |\n";
    cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    return 0;
}