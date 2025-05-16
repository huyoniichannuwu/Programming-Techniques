// b5 lab hai.cpp : This file contains the 'main' function. Program execution begins and ends there.
//•	Mỗi giờ trong 3 giờ đầu tiên tính 30 000 đồng/giờ, 
//•	Mỗi giờ tiếp theo có đơn giá giảm 30 % so với đơn giá trong 3 giờ
//nếu thời gian thuê phòng từ 8 – 17 giờ thì được giảm giá 10%
//nhập vào giờ bắt đầu, giờ kết thúc và in ra số tiền khách hàng phải trả biết rằng 8 ≤ giờ bắt đầu < giờ kết thúc ≤ 24
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//nhap du lieu batdau/ ketthuc / tongthoigian
	int giobatdau, gioketthuc, tongthoigian;
	
	while (true)
	{
		cout << "Nhap gio bat dau (tu 8 gio) va gio ket thuc (den 24): \n"; cin >> giobatdau >> gioketthuc;
		tongthoigian = gioketthuc - giobatdau;

		//dieu kien thoi gian
		if (giobatdau > gioketthuc || giobatdau < 8 || gioketthuc > 24)
		{
			cout << "NHAP SAI DU LIEU, nhap lai du lieu\n";
			continue;
		}
		
;

		//tom tat
		const double giodau = 30000;
		double giothem = 0.0;
		double Tongsotien = 0.0;

		//tinh toan
		if (tongthoigian <= 3) {
			if (giobatdau >= 8 && gioketthuc <= 17) {
				Tongsotien = (tongthoigian * giodau) * (1 - 0.1);
				cout << "Tong tien KARAOKE la: " << Tongsotien << " VND\n";
			}
			else {
				double Tongsotienkotinhgiamgia = (tongthoigian * giodau);
				cout << "Tong tien KARAOKE la: " << Tongsotienkotinhgiamgia << " VND\n";
			}

		}

		else {																			  //thoi gian nhieu hon 3 gio hat
			giothem = tongthoigian - 3;
			Tongsotien = giodau * 3 + giothem * (30000 * (1 - 0.3));                      // 3 gio dau va so gio them x cho tien gio them ( giam 30%)
			
			// 8h-17h
			if (giobatdau >= 8 && gioketthuc <= 17) {
				double Tiengiamgia10 = Tongsotien * (1 - 0.1);;
				cout << "Tong tien KARAOKE la: " << Tiengiamgia10 << " VND\n";
			}
			else
				// 17h-24h
				cout << "Tong tien KARAOKE la: " << Tongsotien << " VND\n";
		}

		break;
	}
	return 0;
}

