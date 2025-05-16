// bai 8 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào 4 số, tìm số lớn nhất, nhỏ nhất của 4 số đó. 

#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cout << "Nhap 4 so: \n"; cin >> a >> b >> c >> d;
        
         //dieu kien a
        if (a > b && a > c && a > d) {
            cout << "So lon nhat la " << a << endl;
        }
        if (a < b && a < c && a < d) {
            cout << "So be nhat la " << a << endl;
        }
        // dieu kien b    
        if (b > a && b > c && b > d) {
            cout << "So lon nhat la " << b << endl;
        }
        if (b < a && b < c && b < d) {
            cout << "So be nhat la " << b << endl;
        }
        // dieu kien c
        if (c > a && c > b && c > d) {
            cout << "So lon nhat la " << c << endl;
        }
        if (c < a && c < b && c < d) {
            cout << "So be nhat la " << c << endl;
        }
        //dieu kien d
        if (d > a && d > b && d > c) {
            cout << "So lon nhat la " << d << endl;
        }
        if (d < a && d < b && d < c) {
            cout << "So be nhat la " << d << endl;
        }
}

