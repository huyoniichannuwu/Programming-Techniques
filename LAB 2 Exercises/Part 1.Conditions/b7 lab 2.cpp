// bai 7 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào 3 số, tìm số lớn nhất, nhỏ nhất của 3 số đó. 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Nhap vao 3 so: \n"; cin >> a >> b >> c;
    if (a == b && a == c && b==c) {
        cout << "ba so bang nhau";
    }
    if (a != b != c) {
        if (a > b && a > c && b > c) {
            cout << "So lon nhat la " << a << endl;
            cout << "So nho nhat la " << c << endl;
        }
        if (c > b && c > a && b > a) {
            cout << "So lon nhat la " << c << endl;
            cout << "So nho nhat la " << a << endl;
        }
        if (b > a && b > c && c > a) {
            cout << "So lon nhat la " << b << endl;
            cout << "So nho nhat la " << a << endl;
        }
        if (b > a && b > c && a > c) {
            cout << "So lon nhat la " << b << endl;
            cout << "So nho nhat la " << c << endl;
        }
        if (c > b && c > a && a > b) {
            cout << "So lon nhat la " << c << endl;
            cout << "So nho nhat la " << b << endl;
        }
        if (a > b && a > c && c > b) {
            cout << "So lon nhat la " << a << endl;
            cout << "So nho nhat la " << b << endl;
        }
    }
    else {
        cout << "Nhap sai du lieu, hay nhap lai";
    }
        return 0;
}

