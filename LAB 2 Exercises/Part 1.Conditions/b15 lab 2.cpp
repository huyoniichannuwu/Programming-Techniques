// bai 15 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Nhập vào một số nguyên có 3 chữ số, hãy in ra cách đọc của nó. 

#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int songuyen3;

    // Nhập số nguyên có 3 chữ số
    cout << "Nhap mot so nguyen co 3 chu so: "; cin >> songuyen3;

    // Kiểm tra điều kiện số có 3 chữ số
    if (songuyen3 < 100 || songuyen3 > 1000) {
        cout << "So nhap vao khong hop le. Vui long nhap lai so nguyen co 3 chu so." << endl;
        return 1;
    }

    // Tách các chữ số
    int tram = songuyen3 / 100;       // Hàng trăm
    int chuc = (songuyen3 % 100) / 10; // Hàng chục
    int donvi = songuyen3 % 10;           // Hàng đơn vị

    // Print cách đọc
    cout << "Cach doc cua so " << songuyen3 << " la: ";

    // Đọc hàng trăm
    if (tram == 1) cout << "mot tram ";
    else if (tram == 2) cout << "hai tram ";
    else if (tram == 3) cout << "ba tram ";
    else if (tram == 4) cout << "bon tram ";
    else if (tram == 5) cout << "nam tram ";
    else if (tram == 6) cout << "sau tram ";
    else if (tram == 7) cout << "bay tram ";
    else if (tram == 8) cout << "tam tram ";
    else if (tram == 9) cout << "chin tram ";

    // Đọc hàng chục
    if (chuc == 0 && donvi != 0) {
        cout << "le "; // trường hợp hàng chục = 0 và hàng đơn vị != 0
    }
    else if (chuc == 1) {
        cout << "muoi "; // trường hợp hàng chục = 1
    }
    else if (chuc == 2) cout << "hai muoi ";
    else if (chuc == 3) cout << "ba muoi ";
    else if (chuc == 4) cout << "bon muoi ";
    else if (chuc == 5) cout << "nam muoi ";
    else if (chuc == 6) cout << "sau muoi ";
    else if (chuc == 7) cout << "bay muoi ";
    else if (chuc == 8) cout << "tam muoi ";
    else if (chuc == 9) cout << "chin muoi ";

    // Đọc hàng đơn vị
    if (donvi != 0) {
        if (chuc == 1 && donvi == 5) {
            cout << "lam";              // trường hợp đặc biệt "mười lăm"
        }
        else if (donvi == 1) cout << "mot";
        else if (donvi == 2) cout << "hai";
        else if (donvi == 3) cout << "ba";
        else if (donvi == 4) cout << "bon";
        else if (donvi == 5) cout << "nam";
        else if (donvi == 6) cout << "sau";
        else if (donvi == 7) cout << "bay";
        else if (donvi == 8) cout << "tam";
        else if (donvi == 9) cout << "chin";
    }

    cout << endl;
    return 0;
}

