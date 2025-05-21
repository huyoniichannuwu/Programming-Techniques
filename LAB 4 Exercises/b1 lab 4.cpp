// b1 lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Tính tổng các phần tử là
// số chia hết cho 3 
// trong dãy số nguyên gồm n phần tử.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int H[100],n;			// tạo mảng tĩnh
	int* p = nullptr;		// tạo mảng rỗng
	cout << "Nhap n phan tu: "; cin >> n;
	p = new int[n];			// tạo mảng động
	int c = 0;

	for (int *i = p; i < p + n; i++) {			// tạo các phần tử mảng
		cout << "Phan tu thu " << c++ << " la: ";
		cin >> *i;
	}
	int sum = 0;
	for (int *i=p; i < p + n; i++) {			//tính sum (nhớ điều kiện của số chia được cho 3)
		if(*i%3==0)
		sum += *i;
	}
	cout << "Tong cac phan tu chia het cho 3 = " << sum;
	delete[] p;									//thu hồi bộ nhớ động
	return 0;
}

