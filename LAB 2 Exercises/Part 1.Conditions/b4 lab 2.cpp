// b4 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình tính lương của nhân viên dựa theo thâm niên công tác (TNCT) như sau: 
// •	Nếu TNCT < 12 tháng: hệ số = 1.92, •	Nếu 36 <= TNCT < 60 tháng: hệ số = 3 •	Nếu TNCT >= 60 tháng: hệ số = 4.5 


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int TNCT, Luong_co_ban = 650000;              //luong co ban(vnd)
    double heso;                                  // he so nhan vao  
    
    cout << "Nhap TNCT: "; cin >> TNCT;
    // tinh toan (Lương = hệ số * lương căn bản)
    // tham nien duoi 12 thang
    if (TNCT < 12) {
        heso = 1.92;
    }
    
    // tham nien tu 12 den 35 thang
    else if (12 <= TNCT && TNCT < 36) {
        heso = 2.34;
    }
    
    // tham nien tu 36 den 59 thang
    else if (36 <= TNCT &&TNCT < 60) {
        heso = 3;
       
    }
    
    // tham nien tu tren 60 thang
    else if (TNCT >= 60) {
        heso = 4.5;
        
    }
    double Luongnhanvien = Luong_co_ban * heso;
    cout << " Luong cua nhan vien la: " << Luongnhanvien << " VND\n";
    return 0;
}
