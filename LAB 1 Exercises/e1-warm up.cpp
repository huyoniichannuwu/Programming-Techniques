// warm up.cpp : This file contains the 'main' function. Program execution begins and ends there.
//=Viết chương trình nhập vào một số nguyên N (4 chữ số). Tính tổng chữ số? 
//Ví dụ : N = 3456  Tổng = 18.


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int N;
    cout << " Nhap 1  so nguyen N (4 chu so) : ";
    cin >> N;
    // no co phai so nguyen co 4 chu so hay ko
    if (N < 1000 || N >= 100000) {
        cout << "So nay khong phai la so nguyen co 4 chu so!" << "\n Hay nhap lai!" << endl;
        return 0;
    }
    // 4 CHU SO NGUYEN LAN LUOT LA:
    int digit1 = N / 1000;
    int digit2 = (N / 100) % 10;
    int digit3 = (N / 10) % 10;
    int digit4 = N % 10;

    //CONG SO NGUYEN LAI 
    int Tong_chu_so = digit1 + digit2 + digit3 + digit4;
    cout << "Tong chu so cua " << N << " : " << Tong_chu_so << endl;
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
