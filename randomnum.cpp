// randomnumberchange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include <math.h>
#include <random>


int main()
{
    int value;
    int min;
    int max;
    
    cout << "Enter a positive value you would like to change: ";
    cin >> value;
    cout << "Enter a value on how many times you want this value to change: ";
    cin >> max;


    for (int i = 1; i <= max; i++)
    {
        int c = i;

        int randomV = rand();
        cout << "Index: " << c << " = " << value*randomV << endl;



    }

    

}




