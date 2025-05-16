// BAI 12 LAB 2 P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình đổi tiền với các yêu cầu sau: trong Lab 2.docx

#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int i, soto, vnd, menhGia[] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 };
	cout << "nhap so tien can doi: ";
	cin >> vnd;
	cout << "Chi tiet doi tien: ";
	for (i = 0; i < 9; i++)
	{
		soto = vnd / menhGia[i];
		if (soto > 0)
		{
			cout << menhGia[i] << "K: " << soto << " to";
			vnd %= menhGia[i];
		}
	}
}

