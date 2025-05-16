// fibonaci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//day fibonacci

#include <iostream>
using namespace std;
int Fibo(int n) {
	if (n == 1 || n == 2){
		return 1;
	}
	else
		return Fibo(n - 1) + Fibo(n - 2);
}
	int main()
{
		int socantinh;
		cout << "Nhap so can tinh:\n"; cin >> socantinh;
	
	cout << "\nDay Fibonacci den so can tinh la:\n";
	for (int i = 1; i <= socantinh; i++) {
		cout << Fibo(i) << endl;
	}
}

