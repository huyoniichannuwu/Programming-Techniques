// 2 so nguyen 1 phep toan so hoc (them).cpp : This file contains the 'main' function. Program execution begins and ends there.
//tu phep toan nguoi dung nhap vao (neu hop le), hay xuat ra man hinh bieu thuc va ket qua cua phep toan da nhap voi 2 so nguyen do

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, d;
    string c;
    
    cout << "Nhap so tu nhien a = ";
    cin >> a;
    cout << "Nhap so tu nhien b = ";
    cin >> b;
    cout << "Nhap phep toan(cong, tru, nhan, chia):  ";
    cin >> c;
    if (c == "cong") {
        d = a + b;
        cout << "ket qua : " << d;
    };
    if (c == "tru") {
        d = a - b;
        cout << "ket qua : " << d;
    };
    if (c == "nhan") {
        d = a * b;
        cout << "ket qua : " << d;
    }
    if (c == "chia") {
        d = a / b;
        cout << "ket qua : " << d;
    };
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
