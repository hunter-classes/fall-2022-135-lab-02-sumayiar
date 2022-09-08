/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2A

This program calculates the square root of the number that the user inputs that needs to be greater than 0 and less than 100.
*/
#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Please enter an integer: " << endl;
    cin >> a;
    while (a <= 0 || a >= 100){
        cout << "Please re-enter: " << endl;
        cin >> a;
    }
    cout << "Number squared is " << pow(a, 2) << endl;
        return 0;
}