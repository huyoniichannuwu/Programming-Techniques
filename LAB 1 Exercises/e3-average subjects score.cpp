﻿// Trungbinhmonhoc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//nhập vào điểm thi và hệ số của 3 môn Toán, Lý, Hóa của một sinh viên. Tính điểm trung bình của sinh viên đó

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, x;
    cout << "Nhap diem thi Toan : ";
    cin >> a;
    int HesoToan = 3;
    cout << "Nhap diem thi Ly : ";
    cin >> b;
    int HesoLy = 2;
    cout << "Nhap diem thi Hoa : ";
    cin >> c;
    int HesoHoa = 1;
    x = (a*HesoToan + b*HesoLy + c*HesoHoa) / (HesoToan+HesoLy+HesoHoa);  //diem trung binh  
    cout << "DIEM TRUNG BINH CUA SV LA : " << x;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
