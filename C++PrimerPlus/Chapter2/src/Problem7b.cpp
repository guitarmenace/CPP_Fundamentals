/*

Travis Grice 
07/08/2020
C++ Primer Plus Sixth Edition
Stephen Prata
Chapter 2 - Programming Exercises
Exercise 7

Write a program that asks the user to enter an hour value and a minute value. The main() function should then pass these two values to a type void function that displays the two values in the format shown in the following sample run:

Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28

*/

#include <iostream>
using namespace std;

void displayTime(int hours, int minutes);

int main()
{
    int h, m;
    printf("Enter the number of hours: ");
    scanf("%d", &h);
    printf("Enter the number of minutes: ");
    scanf("%d", &m);
    displayTime(h, m);
}

void displayTime(int hours, int minutes)
{
    printf("Time: %d:%d\n", hours, minutes);
}