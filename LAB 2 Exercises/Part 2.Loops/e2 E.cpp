// b2 cau e part 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// biểu diễn S= căn 3 trong căn 3 trong căn 3 .... trong a lần

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a;     // tang can lap
	double S = 0.0;
	cout << " Nhap so tang can lap: "; cin >> a;
	//dieu kien cua sqrt
	if (a >= 0)
	{
		for (int i = 1; i <= a; i++)
			S = sqrt(3 + S);
	}
	else
		cout << "Nhap sai du lieu, vui long nhap so nguyen duong";
	
	cout << "S=" << S;
}


