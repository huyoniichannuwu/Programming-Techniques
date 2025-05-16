// bai 11 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào 2 phân số, xuất ra tổng hiệu tích thương của hai phân số đó. Lưu ý kiểm tra điều kiện nhập mẫu khác 0 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double tuso1, mauso1, tuso2, mauso2;
    cout << "Nhap phan so 1 : \ntu so : "; cin >> tuso1;
    cout << "mau so : "; cin >> mauso1;
    if (mauso1 == 0) {
    cout << "mau so khong the = 0";
        return 1;
    }

    cout << "\nNhap phan so 2 : \ntu so : "; cin >> tuso2;
    cout << "mau so : "; cin >> mauso2;
    if (mauso2 == 0) {
        cout << "mau so khong the = 0";
        return 1;
    }
    //Tong
    double Tong = (tuso1 * mauso2 + tuso2 * mauso1) / (mauso1 * mauso2);
    cout << "\nTONG 2 PHAN SO: " << Tong << endl;

    //Hieu
    double Hieu = (tuso1 * mauso2 - tuso2 * mauso1) / (mauso1 * mauso2);
    cout << "HIEU 2 PHAN SO: " << Hieu << endl;

    //Tich
    double Tich = (tuso1 * tuso2) / (mauso1 * mauso2);
    cout << "TICH 2 PHAN SO: " << Tich << endl;

    //Thuong
    double Thuong = (tuso1 * mauso2) / (tuso2 * mauso1);
    cout << "THUONG 2 PHAN SO: " << Thuong << endl;
}

