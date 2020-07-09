/*

Travis Grice 
07/08/2020
C++ Primer Plus Sixth Edition
Stephen Prata
Chapter 2 - Programming Exercises
Exercise 4

Write a program that asks the user to enter his or her age. The program then
should display the age in months:

Enter your age: 29
Your age in months is 384.

*/

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Your age in months is " << 29 * 12 << "." << endl;
}