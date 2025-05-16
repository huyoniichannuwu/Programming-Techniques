// B1 LAB 2(P2).cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình tính n!! với n!! = 1.3.5…n nếu n lẻ, n!! = 2.4.6…n nếu n chẵn. 
// giai thua co nghia la 3! = 1.2.3= 6
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so nguyen n: "; cin >> n;
	int gt = 1;
	for (int i = (n % 2) ? 1 : 2; i <= n; i += 2)   // for(khoi tao, dieu kien lap, buoc nhay)
		gt *= i;
	cout << "n!! = " << gt << endl;
}

