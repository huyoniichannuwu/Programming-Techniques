// bai 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình tính khoảng cách từ điểm A(x, y, z) tới mặt phẳng: ax + by + cz +d = 0

#include <iostream>
#include <cmath>
using namespace std;
        //Ham tinh
double Tinh_khoang_cach ( double a, double b, double c, double d, double x, double y, double z ) {
    double Tuso = fabs(a * x + b * y + c * z + d);
    double Mauso = sqrt(pow(a, 2) + pow(b, 2) + pow(c, 2));
    return Tuso / Mauso;
}



int main()  // nhap gia tri
{
    double a, b, c, d, x, y, z;

    //diem 
    cout << "Nhap diem A (x, y, z): " << endl;
    cout << " x = "; cin >> x;
    cout << " y = "; cin >> y;
    cout << " z = "; cin >> z;

    //matphang
    cout << "Nhap gia tri trong mat phang ax + by + cz + d" << endl;
    cout << " a = "; cin >> a;
    cout << " b = "; cin >> b;
    cout << " c = "; cin >> c;
    cout << " d = "; cin >> d;

    //dieu kien ( neu a = b = c = 0 thi phuong trinh khong ton tai )
    if (a == 0 && b == 0 && c == 0) {
        cout << " Nhap sai so lieu, hay nhap lai!";
        return 1;                                           //return 1 khi gap loi nhap so lieu
    }

    //tinh toan
    double Khoangcach = Tinh_khoang_cach(a, b, c, d, x, y, z);
    cout << " Khoang cach tu diem A(" << x << "," << y << "," << z << ") toi Mat phang PT: " << a <<"x" << "+" << b << "y" << "+" << c << "z" << "+" << d << "= " << Khoangcach;
}

