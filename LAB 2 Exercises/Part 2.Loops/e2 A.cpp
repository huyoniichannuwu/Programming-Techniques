// bai 2 (II) lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào số nguyên n. Tính và in ra các tổng sau: 
// •	S=1+ 2 + 3+...+n 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout << " Nhap so nguyen n: "; cin >> n;
	int S = 0;		//tong
	for (int i = 1; i <= n; i += 1)		//(khoi tao, dieu kien lap, buoc nhay)
		S += i;
	
	cout << "S = " << S << endl;
}

