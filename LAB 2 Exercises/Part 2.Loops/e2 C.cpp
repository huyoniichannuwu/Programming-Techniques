// bai 2 (ii) lab 2 cau c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//S=!n

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen n = "; cin >> n;
    int S = 1;
    for (int i = 1; i <= n; i += 1)       //for(khoi tao, dieu kien lap, buoc nhay)
        S *= i;
    cout << "S= "<< S <<endl;
}
