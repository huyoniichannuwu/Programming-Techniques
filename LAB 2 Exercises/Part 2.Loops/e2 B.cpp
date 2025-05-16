// bai 2(ii) lab 2 cau b.cpp : This file contains the 'main' function. Program execution begins and ends there.
//•2B.	 S =1+ 3+ 5+ 7 +...+ (2n +1) 

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen n = "; cin >> n;
	int S = 0;
	for (int i = 1; i <= 2 * n + 1; i += 2)
		S += i;
	cout << "S=" << S << endl;
}

