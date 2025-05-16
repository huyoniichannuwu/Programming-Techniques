// bai 13 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Chương trình cho phép nhập vào một số nguyên dương, là lượng  điện tiêu thụ (kWh) trong tháng của nhà bạn. 
//100 kwh đầu tiên 	50 kwh tiếp 	50 kwh tiếp 	100 kwh tiếp 	Từ 300 kwh trở lên(if 3)
//550 VND 	           900 VND 	    1250 VND 	       1450 VND 	1700 VND                     thuế 10%



#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int kwh;
    cout << "Nhap luong dien tieu thu (kWh) trong thang cua nha ban: "; cin >> kwh;
    //100kwh dau tien
    int tongtien=0, tienkwhdautien = 550; //vnd
    const double thue = 0.1; 
    if (kwh <= 100) 
        tongtien = (kwh * tienkwhdautien);
        
    
    //kwh tiep theo
    if (kwh > 100) {
        int kwhtieuthuthem = kwh - 100;
        int tienkwhtieplan1 = 900, tienkwhtieplan2 = 1250, tienkwhtieplan3 = 1450, tienkwhtieplan4=1700; //vnd
        
        if (kwh >= 101 && kwh <= 150) {
            tongtien = (100 * tienkwhdautien + kwhtieuthuthem * tienkwhtieplan1);
        }
        else if (kwh >= 151 && kwh <= 200) {
            tongtien = 100 * tienkwhdautien + 50 * tienkwhtieplan1 + (kwh - 150) * tienkwhtieplan2;
        }
        else if (kwh >= 201 && kwh <= 300) {
            tongtien = 100 * tienkwhdautien + 50 * tienkwhtieplan1 + 50 * tienkwhtieplan2 + (kwh - 200) * tienkwhtieplan3;
        }
        else if (kwh >= 301) {
            tongtien = 100 * tienkwhdautien + 50 * tienkwhtieplan1 + 50 * tienkwhtieplan2 + 100 * tienkwhtieplan3 + (kwh - 300) * tienkwhtieplan4;
        }
    }
    //thue (VAT)
    double vat = tongtien * 0.1;
    double tongtien_datinhthue = tongtien + vat;
    cout << " Tong tien dien ban phai tra (da bao gom VAT) la " << tongtien_datinhthue << " VND" << endl;

}

