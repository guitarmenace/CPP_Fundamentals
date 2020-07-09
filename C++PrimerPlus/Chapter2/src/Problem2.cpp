/*

Travis Grice 
07/08/2020
C++ Primer Plus Sixth Edition
Stephen Prata
Chapter 2 - Programming Exercises
Exercise 2

Write a C++ program that asks for a distance in furlongs and converts it to
yards. (One furlong is 220 yards.)

*/

#include <iostream>
using namespace std;

int main()
{
    int furlongs;
    cout << "Distance in furlongs: ";
    cin >> furlongs;
    cout << furlongs << " furlong(s) = " << 
    (220 * furlongs) << " yards." << endl;
}
