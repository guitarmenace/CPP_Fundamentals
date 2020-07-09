/*

Travis Grice 
07/08/2020
C++ Primer Plus Sixth Edition
Stephen Prata
Chapter 2 - Programming Exercises
Exercise 3

Write a C++ program that uses three user-defined functions (counting main() as
one) and produces the following output:
Three blind mice
Three blind mice
See how they run
See how they run

One function, called two times, should produce the first two liines, and the
remaining function, also called twice, should produce the remaining output.

*/

#include <iostream>
using namespace std;

void printVerseOne();
void printVerseTwo();

int main()
{
    printVerseOne();
    printVerseOne();
    printVerseTwo();
    printVerseTwo();
}

void printVerseOne()
{
    cout << "Three blind mice" << endl;
}

void printVerseTwo()
{
    cout << "See how they run" << endl;
}