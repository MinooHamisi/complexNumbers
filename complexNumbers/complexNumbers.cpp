// complexNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "complex.h"
#include <iostream>
using namespace std;

int main()
{
    
    complex c1, c2, c3;
    c1.input();
    c2.input();
    cout << "c1 + c2 = ";
    c3 = c2 + c1;
    c3.output();
    cout << "c1 - c2 = ";
    c3 = c2 - c1;
    c3.output();
    cout << "c1 * c2 = ";
    c3 = c2 * c1;
    c3.output();
    return 0;
}


