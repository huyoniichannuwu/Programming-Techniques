// b1 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//nhập vào một số (a). Xuất ra màn hình chuỗi “số chẵn” nếu số đó là số chẵn. Xuất ra màn hình chuỗi “số lẻ” nếu số đó là số lẻ

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a;
    cout << "Nhap vao mot so bat ky: "; cin >> a;
    if (a % 2 == 0)
        cout << " So chan\n";
    else
        cout << " So le\n";
    return 0;
}


