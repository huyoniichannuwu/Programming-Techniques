// bai 2 (II) lab 2 câu d.cpp : This file contains the 'main' function. Program execution begins and ends there.
//    S= 1/2*3 + ... + 1/ n*(n+1) bat dau tu 1/2*3

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Nhap so nguyen n: "; cin >> n;
    
    //dieu kien phan so
    if (n < 2) {
        cout << "Hay nhap n la so lon hon 2";
        return 1;
    }
    double S = 0.0;
    //vong lap
    for (double i = 2; i <= n; ++i)        //vong lap for(khoi tao i, dieu kien lap, buoc nhay) 
        S += 1.0 / (i*(i+1));
    
    cout << "S = " << S;

}

