// b2 lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Hãy tìm những phần tử có giá trị trùng nhau trong dãy số nguyên n phần tử. Cho biết giá trị đó xuất hiện bao nhiêu lần.

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int Huy[100],n;             //mảng tỉnh
    cout << "Nhap n phan tu so nguyen: "; cin >> n;
    int* p = nullptr;
    int* dem;
    // 2 mảng động: 
    p = new int[n];                //mảng động gồm n phần tử
    dem = new int[n];               // mảng động để đếm số trùng lặp
    int c = 0;
    for (int* i = p; i < p + n; i++)            // tạo phần tử trong mảng
    {
        cout << "phan tu thu "<<c++ << " la ";
        cin >> *i;
        dem[i-p] = 1;                               // de san la
    }
    for (int* i = p; i < p + n; i++)                     //tao mang de dem so' trung nhau
    {
        if(dem[*i] == -1) continue;
        for (int* j = i + 1; j < n + p; j++) {
            if (*i == *j)
            {
                dem[i-p]++;
                dem[j-p]=-1;
            }
        }
    }
    bool Trunglap = false;
    cout << "Cac phan tu bi trung va so lan xuat hien:\n";
    for (int *i = p; i <p+n; i++) {
        if (dem[i-p] > 1) {
            cout << "Gia tri " << p[i-p] << " bi lap " << dem[i-p] << " lan.\n";
            Trunglap = true;
        }
    }
    if (!Trunglap) {
        cout << "Khong co phan tu nao bi trung lap.\n";
    }
    delete[] dem;
    delete[] p;
    return 0;

}


