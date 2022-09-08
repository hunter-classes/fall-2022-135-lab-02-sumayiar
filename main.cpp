/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2B

This program prints all the integers in the range L <= i < U, with L representing the lower limit of the interval and U representing the upper limit of the interval.
*/
#include<iostream>
using namespace std;
#include "funcs.h"

int main()
{
    int L;
    int U;
    cout << "Please enter L: " << endl;
    cin >> L;
    cout << "Please enter U: " << endl;
    cin >> U;
    print_interval(L, U);
    return 0;
}
