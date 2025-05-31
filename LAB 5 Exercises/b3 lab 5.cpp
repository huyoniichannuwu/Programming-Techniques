// b3 lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Viết chương trình để thực hiện các  phân tích thống kê cho một lớp học
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <istream>

using namespace std;

struct Sinhvien {
    string msv;
    string hoten;
    int tuoi;
    float diem;
    Sinhvien() {
        msv = "";
        hoten = "";
        tuoi = 0;
        diem = 0;
    }
};

void Nhap(Sinhvien* s, int& n) {
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << ": " << endl;
        cout << "Nhap mssv: ";
        getline(cin, s[i].msv);
        cout << "Nhap ho ten: ";
        getline(cin, s[i].hoten);
        cout << "Nhap tuoi: ";
        cin >> s[i].tuoi;
        cout << "Nhap diem: ";
        cin >> s[i].diem;
        cin.ignore();
    }
}

void Xuat(Sinhvien* s, int n) {
    cout << "Danh sach sinh vien: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "MSV: " << s[i].msv << " Ho ten: " << s[i].hoten << " Tuoi: " << s[i].tuoi << " Diem: " << s[i].diem << endl;
    }
}

void tinhdiemtrungbinh(Sinhvien* s, int n) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        tong += s[i].diem;
    }
    float tb = tong / n;
    cout << "Diem trung binh cua lop hoc la: " << tb << endl;
}

void diemcaonhat(Sinhvien* s, int n) {
    float max = s[0].diem;
    string ten = s[0].hoten;

    for (int i = 1; i < n; i++) {
        if (s[i].diem > max) {
            max = s[i].diem;
            ten = s[i].hoten;
        }
    }
    cout << "Sinh vien co diem cao nhat la " << ten << " voi " << max << " diem" << endl;
}

void diemthapnhat(Sinhvien* s, int n) {
    float min = s[0].diem;
    string ten = s[0].hoten;

    for (int i = 1; i < n; i++) {
        if (s[i].diem < min) {
            min = s[i].diem;
            ten = s[i].hoten;
        }
    }
    cout << "Sinh vien co diem thap nhat la " << ten << " voi " << min << " diem" << endl;
}

void timsinhvien(Sinhvien* s, int n) {
    string masv;
    cout << "Nhap mssv can tim: ";
    getline(cin, masv);
    for (int i = 0; i < n; i++) {
        if (s[i].msv == masv) {
            cout << "Sinh vien can tim la: " << s[i].hoten << endl;
        }
    }
}

void sapxep(Sinhvien* s, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[i].diem < s[j].diem) {
                Sinhvien temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    Xuat(s, n);
}

void menu() {
    cout << "\n";
    cout << "1. Nhap thong tin sinh vien" << endl;
    cout << "2. Hien thi thong tin sinh vien" << endl;
    cout << "3. Tinh diem trung binh cua lop hoc" << endl;
    cout << "4. Hien thi sinh vien co diem cao nhat" << endl;
    cout << "5. Hien thi sinh vien co diem thap nhat" << endl;
    cout << "6. Tim sinh vien boi ID" << endl;
    cout << "7. Sap xep cac ban ghi boi tong diem thi cua sinh vien" << endl;
    cout << "8. Thoat" << endl;
}


int main() {
    Sinhvien* s = nullptr;
    int n = 0;
    int luachon;

    do {
        menu();
        cout << "Nhap lua chon: ";
        cin >> luachon;
        cin.ignore();

        switch (luachon) {
        case 1:
            if (s != nullptr) {
                delete[] s;
            }
            cout << "Nhap so sinh vien: ";
            cin >> n;
            cin.ignore();
            s = new Sinhvien[n];
            Nhap(s, n);
            break;

        case 2:
            if (s == nullptr) {

            }
            else {
                Xuat(s, n);
            }
            break;

        case 3:
            if (s == nullptr) {

            }
            else {
                tinhdiemtrungbinh(s, n);
            }
            break;

        case 4:
            if (s == nullptr) {

            }
            else {
                diemcaonhat(s, n);
            }
            break;
        case 5:
            if (s == nullptr) {

            }
            else {
                diemthapnhat(s, n);
            }
            break;

        case 6:
            if (s == nullptr) {

            }
            else {
                timsinhvien(s, n);
            }
            break;

        case 7:
            if (s == nullptr) {

            }
            else {
                sapxep(s, n);
            }
            break;
        case 8:
            if (s != nullptr) {
                delete[] s;
            }
            cout << "Chuong trinh da thoat!" << endl;
            return 0;

        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
        }
    } while (true);

    return 0;
}


