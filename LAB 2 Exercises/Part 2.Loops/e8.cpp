// bai 8 lab 2 part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//viet chương trình in ra bảng cửu chương

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    for (b = 1; b < 10; b++) {
        for (a = 1; a <= 10; a++) {
            cout << a << " * " << b << " = " << a * b << '\t';
        }
    }
}

