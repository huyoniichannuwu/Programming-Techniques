// BAI 7 LAB 2 PART 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// trung binh cong day so duoc nhap tu ban phim
// quy uoc gia tri 9999 la "so cam canh"
// nhap den khi nhap so 9999 la dung lai viec nhap

#include <iostream>
using namespace std;
int main()
{
	double so, tong = 0.0, TB;
	int i = 0;
	cout << "Nhap cac so (nhap 9999 de ket thuc):\n";
	cin >> so;
	while (so != 9999)
	{
		tong += so;
		i++;
		cin >> so;
	}
	if (i > 0)
	{
		TB = tong / i;
		cout << "Gia tri trung binh cong la: " << TB << '\n';
	}
	else
	{
		cout << "Khong co so nao duoc nhap." << endl;
	}
}
	
