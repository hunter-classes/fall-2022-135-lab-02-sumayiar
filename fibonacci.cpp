/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2D

This program uses an array of ints to compute and print the first 60 Fibonacci numbers.  
*/
#include <iostream>
using namespace std;

int main()
{
    int fib[60];
    fib[0] = 0;
    fib[1] = 1;
    
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    for (int i = 0; i < 60; i++){
        cout << fib[i] << endl;
    }
    return 0;
}
/*
When the program approach two billions, the values diverge from what it should be by showing negative numbers. This happens because the maximum value for an int is 2147483647
. When a program exceeds the maximum int value, you begin to receive negative ints;
*/
