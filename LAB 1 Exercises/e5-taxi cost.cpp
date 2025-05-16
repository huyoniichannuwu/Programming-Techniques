// taxi km.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình nhập vào số Km đã đi của 1 xe taxi. 
// Tính tổng tiền phải trả cho quãng đường đó. 
// Biết rằng: Km đầu tiên giá: 15000đ/Km. Từ Km 2 trở đi giá 12000đ/Km. 
// Thuế giá trị gia tăng: 10% trên tổng tiền trả. 

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const double KMSO1 = 15000;
	const double Thue_giatri_giatang = 0.1; // 10%
	double a;
	cout << "Nhap so km da di : ";
	cin >> a;
	
	double Tong_tien_phai_tra;
	if (a <= 1) {
		Tong_tien_phai_tra = KMSO1 + (KMSO1 * Thue_giatri_giatang);
		cout << "Tong so tien phai tra : " << Tong_tien_phai_tra;
	}
	else {
		double Tien_them = max(0.0, a - 1);
		Tong_tien_phai_tra = KMSO1 + Tien_them * 12000;

		//them Thue
		Tong_tien_phai_tra += Tong_tien_phai_tra * Thue_giatri_giatang;
		cout << "Tong so tien phai tra (VND) : " << Tong_tien_phai_tra;

	}
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
