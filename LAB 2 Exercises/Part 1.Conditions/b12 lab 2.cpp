// bai 12 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Bài tập 12:  Viết chương trình nhập vào một kí tự. 
// Hãy xét xem đây là có phải là ký tự chữ in? là ký tự chữ thường? là ký tự số? hay là ký tự khác những loại ký tự trên?

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    char kt;
    cout << "Nhap vao mot ky tu: "; cin >> kt;
    if (kt >= 'A' && kt <= 'Z') {
        cout << "Ky tu " << kt << " la chu in hoa" << endl;
    }
    else if (kt >= 'a' && kt <= 'z') {
        cout << "Ky tu " << kt << " la chu thuong" << endl;
    }
    else if (kt >= '0' && kt <= '9') {
        cout << "Ky tu " << kt << " la ky tu so" << endl;
    }
    else {
        cout << "Ky tu " << kt << " la ky tu khac nhung loai ky tu tren" << endl;
    }
    return 0;
}

