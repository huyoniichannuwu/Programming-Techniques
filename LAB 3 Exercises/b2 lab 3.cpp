// lab 3-ham-bai 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
// nhap 1234 -> 4

#include <iostream>
#include <math.h>
using namespace std;
void length(int x) {
	int demso = 0;
	while (x != 0) {			//n khac 0
		x /= 10;				//1000/10  100/10
		demso++;
	}
	cout << demso;

}

int main() 
{
	int n;
	cout << " Nhap so nguyen n: "; cin >> n;
	cout << "Chieu dai cua day so nguyen n: ";
	length(n);
}

