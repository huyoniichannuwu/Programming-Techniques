// b4 lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Cho dãy số nguyên a. 
// Hãy tìm dãy con dài nhất trong a được sắp theo thứ tự tăng dần. (dãy con của a phải chứa các phần tử liên tục nhau của a).

#include <iostream>
using namespace std;

void timChuoiConTangDaiNhat(int* a, int n) {
    int max = 1;
    int dem = 1;
    int batdau = 0;
    int dembatdau = 0;
    for (int i = 1; i < n; i++) {
        if (*(a + i) > *(a + i - 1)) {
            dem++;
        }
        else {
            if (dem > max) {
                max = dem;
                batdau = dembatdau;
            }
            dem = 1;
            dembatdau = i;
        }
    }
    if (dem > max) {
        max = dem;
        batdau = dembatdau;
    }
    cout << "\nChuoi con tang lien tiep dai nhat la:\n";
    for (int i = batdau; i < batdau + max; i++) {
        cout << *(a + i) << " ";
    }
    cout << "\nDo dai: " << max << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu cua day: ";
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> *(a + i);
    }
    timChuoiConTangDaiNhat(a, n);

    delete[] a;
    return 0;
}

