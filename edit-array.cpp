/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab2C

This program creates an array of 10 integers and fills all the cells with thr value of 1. Then, it asks the user to input an index and then its new value which is in the range 0 <= i < 10. Lastly, the program prints the updated array. 
*/
#include<iostream>
using namespace std;

int main()
{
    int index;
    int value;
    int myData[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1,};
    do {
        for (int i = 0; i < 10; i++) {
            cout << myData[i] << " \n" << endl; 
        }
        cout << "Input index: " << endl;
        cin >> index;
        cout << "Input value: " << endl;
        cin >> value;
        
        if (index >= 0 && index < 10){
            myData[index] = value;
        }
    } while (index >= 0 && index < 10);
    return 0;
}
