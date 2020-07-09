/*

Travis Grice 
07/08/2020
C++ Primer Plus Sixth Edition
Stephen Prata
Chapter 3 - Programming Exercises
Exercise 1

Write a short program that asks for your height in integer inches and then
converts your height to feet and inches. Have the program use the underscore
character to indicate where to type the response. Also use a const symbolic
constant to represent the conversion factor.

*/

#include <iostream>
using namespace std;

int main()
{
    int inches;
    cout << "Height in inches: ";
    cin >> inches;
    cout << inches << " inches -> " << inches / 12 << 
    "\'" << inches % 12 << "\"." << endl;
}