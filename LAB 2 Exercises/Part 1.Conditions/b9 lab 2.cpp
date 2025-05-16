// bai 9 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình xếp loại thi đua cho học sinh. (Tự phân tích ngữ cảnh và lập trình) 
//ngu canh: yeu, trung binh, kha, gioi, xuat sac
//cho rang diem trung binh (toan,van,anh) va he so 1(15ph) he so 2 (1 tiet) he so 3 (thi cuoi ki)

#include <iostream>
using namespace std;
int main()
{
   
	int heso1 = 1, heso2 = 2, heso3 = 3;
	//toan
	double diem_tb_toan, diem15phtoan, diem1tiettoan, diemcuoikytoan;
	cout << "Nhap diem toan (15ph) = "; cin >> diem15phtoan;
	cout << "Nhap diem toan (giua ky) = "; cin >> diem1tiettoan;
	cout << "Nhap diem toan (cuoi ky) = "; cin >> diemcuoikytoan;
	diem_tb_toan = (diem15phtoan * heso1 + diem1tiettoan * heso2 + diemcuoikytoan * heso3) / (heso1 + heso2 + heso3);
	
    //van
	double diem_tb_van, diem15phvan, diem1tietvan, diemcuoikyvan;
	cout << "\nNhap diem van (15ph) = "; cin >> diem15phvan;
	cout << "Nhap diem van (45ph) = "; cin >> diem1tietvan;
	cout << "Nhap diem van (cuoi ky) = "; cin >> diemcuoikyvan;
	diem_tb_van = (diem15phvan * heso1 + diem1tietvan * heso2 + diemcuoikyvan * heso3) / (heso1 + heso2 + heso3);
	
	//anh
	double diem_tb_anh, diem15phanh, diem1tietanh, diemcuoikyanh;
	cout << "\nNhap diem anh (15ph) = "; cin >> diem15phanh;
	cout << "Nhap diem anh (45ph) = "; cin >> diem1tietanh;
	cout << "Nhap diem anh (cuoi ky) = "; cin >> diemcuoikyanh;
	diem_tb_anh = (diem15phanh * heso1 + diem1tietanh * heso2 + diemcuoikyanh * heso3) / (heso1 + heso2 + heso3);
	

	//bangdiem
	cout << "\nDiem trung binh ca hoc ky mon toan = " << diem_tb_toan << endl;
	cout << "Diem trung binh ca hoc ky mon van = " << diem_tb_van << endl;
	cout << "Diem trung binh ca hoc ky mon anh = " << diem_tb_anh << endl;
	double bang_diem_tong = (diem_tb_toan + diem_tb_van + diem_tb_anh) / 3;
	cout << "\nDiem tong trung binh cua hoc sinh : " << bang_diem_tong;
	
	//xet diem
	if (bang_diem_tong >= 9) {
		cout << "\nHoc sinh xuat sac";
	}
	else if(8<=bang_diem_tong &&bang_diem_tong<9){
		cout << "\nHoc sinh gioi"<<endl;
	}
	else if (bang_diem_tong>=6.5 && bang_diem_tong < 8) {
		cout << "\nNHoc sinh kha" << endl;
	}
	else if (5 <= bang_diem_tong < 6.5) {
		cout << "\nHoc sinh trung binh" << endl;
	}
	else if (bang_diem_tong < 5) {
		cout << "\nHoc sinh yeu" << endl;
	}

}

