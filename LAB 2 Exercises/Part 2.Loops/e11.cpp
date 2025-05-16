// BAI 11 LAB 2 P2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình hiện lên màn hình các kí tự có mã ASCII từ 33 đến 255. 

#include <iostream>
using namespace std;
int main()
{
	cout << "Cac ky tu co ma ASCII tu 33 den 255:\n";
	for (int i = 33; i <= 255; i++) 
	{
		cout << (char)i << " ";
		if ((i - 32) % 20 == 0) cout << endl;
	}
}

