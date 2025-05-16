// b2 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào 2 số nguyên, tìm số lớn nhất của 2 số. 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b;
    cout << "Nhap vao 2 so nguyen: \n"; cin >> a >> b;
    if (a > b)
        cout << "So lon nhat cua 2 so: " << a << endl;
    else
        cout << "So lon nhat cua 2 so: " << b << endl;
}


