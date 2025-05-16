// bai 6 lab 2 moi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//•	Kiểm tra tính hợp lệ của ngày, tháng nhập. 
//	Cho biết tháng này thuộc quý mấy trong năm.
//	Cho biết tháng nhập có bao nhiêu ngày.
//	Cho biết ngày hôm sau của ngày đã nhập là ngày nào.
//	Cho biết ngày hôm trước của ngày đã nhập là ngày nào


#include <iostream>
using namespace std;
int main()
{
    int d, m;    //d=day, m=month
    while (true) {
        cout << "Nhap thang cua nam hien tai (2025): "; cin >> m;                 
        cout << "Nhap ngay cua nam hien tai (2025): "; cin >> d;
        
        // kiem tra tinh hop le
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {      //31 days months

            if (0 < d && d <= 31)
                cout << "Thang " << m << " (2025) co " << 31 << " ngày" << endl;
            else {
                cout << "sai du lieu, nhap lai ngay thang phu hop\n";
                continue;
            }
            break;

        }
        else if (m == 2) {      //february
            if (0 < d && d <= 28)
                cout << "Thang " << m << " (2025) co " << 28 << " ngày" << endl;
            else {
                cout << "sai du lieu, nhap lai ngay thang phu hop\n";
                continue;
            }
            break;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11) {       //30 days months
            if (0 < d && d <= 30)
                cout << "Thang " << m << " (2025) co " << 30 << " ngày" << endl;
            else {
                cout << "sai du lieu, nhap lai ngay thang phu hop\n";
                continue;
            }
            break;
        }
        else {
            cout << "sai du lieu, nhap lai ngay thang thang phu hop";
            continue;
            }
        break;
    }
    //quy trong nam
    if (m >= 1 && m <= 3) {
        cout << "ngay " << d << " thang " << m << " roi vao QUY 1\n";
    }
    else if (m >= 4 && m <= 6) {
        cout << "ngay " << d << " thang " << m << " roi vao QUY 2\n";
    }
    else if (m >= 7 && m <= 9) {
        cout << "ngay " << d << " thang " << m << " roi vao QUY 3\n";
    }
    else if (m >= 10 && m <= 12) {
        cout << "ngay " << d << " thang " << m << " roi vao QUY 4\n";
    }
        //	Cho biết ngày hôm sau của ngày đã nhập là ngày nào.
    int ngaysau=d+1 ;
    cout << "ngay hom sau la " << ngaysau << " thang " << m << endl;
    int ngaytruoc = d - 1;
    cout << "ngay hom truoc la " << ngaytruoc << " thang " << m << endl;  
}
       