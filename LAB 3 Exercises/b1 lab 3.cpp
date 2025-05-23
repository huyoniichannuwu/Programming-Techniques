// lab 3-ham-bai 1 sua.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết hàm tìm số đảo ngược của 1 số nguyên vd: 123 -> 321

#include <iostream>
#include <math.h>
using namespace std;
void reverse(int x) 
{
	int n;
	while (x != 0) {
		n = x % 10;
		x = x / 10;
		cout << n;                // in n thi ta se duoc nghiem cua ham
	}
}


int main()
{
	int x;
	cout << "Nhap mot so nguyen de dao nguoc"; cin >> x;
	//ap dung ham
	reverse(x);
}