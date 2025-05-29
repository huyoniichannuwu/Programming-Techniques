// b5 lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Cho chuỗi s là họ và tên đầy đủ của 1 người.
// Hãy tách phần tên của người đó.

#include <iostream>
#include <string>
using namespace std;

string layTenRieng(const string& hoTen) {
    size_t viTriCuoi = hoTen.find_last_of(' ');
    if (viTriCuoi == string::npos)
    {
        return hoTen;
    }
    return hoTen.substr(viTriCuoi + 1);
}

int main() {
    string hoTen;
    cout << "Nhap ho va ten: ";
    getline(cin, hoTen);
    
    string tenrieng = layTenRieng(hoTen);
    cout << "Ten rieng la: " << tenrieng << endl;
    return 0;
}
