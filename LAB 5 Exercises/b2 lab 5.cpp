// b2 lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<math.h>

using namespace std;

struct set {
    int* data;
    int size;
};
// nhap so phan tu
void input(set& a) {
    cout << "Nhap so phan tu: ";
    cin >> a.size;
    a.data = new int[a.size];
    for (int i = 0; i < a.size; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a.data[i];
    }
}

// xuat
void output(set& a) {
    for (int i = 0; i < a.size; i++) {
        cout << a.data[i] << " ";
    }
    cout << endl;
}

// tinh tong
int total(set& a) {
    int sum = 0;
    for (int i = 0; i < a.size; i++) {
        sum += a.data[i];
    }
    return sum;
}

// Kiểm tra một số có phải số nguyên tố
bool laSoNguyenTo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Đếm và in ra các số nguyên tố trong tập hợp
void Songuyento(set& a) {
    cout << "Cac so nguyen to trong tap hop: ";
    bool songto = false;

    for (int i = 0; i < a.size; i++) {
        if (laSoNguyenTo(a.data[i])) {
            cout << a.data[i] << " ";
            songto = true;
        }
    }

    if (!songto) {
        cout << "Khong co so nguyen to nao";
    }
    cout << endl;
}

// sap xep tang dan
void sapxep(set& a) {
    for (int i = 0; i < a.size - 1; i++) {
        for (int j = i + 1; j < a.size; j++) {
            if (a.data[i] > a.data[j]) {
                int tmp = a.data[i];
                a.data[i] = a.data[j];
                a.data[j] = tmp;
            }
        }
    }
}

// giao 2 tap hop
void giao(set& a, set& b) {
    cout << "Giao cua 2 tap hop: ";
    bool tim = false;
    for (int i = 0; i < a.size; i++) {
        bool trung = false;
        // Kiểm tra xem phần tử đã được in ra chưa
        for (int k = 0; k < i; k++) {
            if (a.data[k] == a.data[i]) {
                trung = true;
                break;
            }
        }
        if (trung) continue;

        // Kiểm tra phần tử có trong tập B không
        for (int j = 0; j < b.size; j++) {
            if (a.data[i] == b.data[j]) {
                cout << a.data[i] << " ";
                tim = true;
                break;
            }
        }
    }
    if (!tim) cout << "Khong co phan tu chung";
    cout << endl;
}

// hop 2 tap hop
void hop(set& a, set& b) {
    cout << "Hop cua 2 tap hop: ";
    for (int i = 0; i < a.size; i++) {
        bool trung = false;
        for (int k = 0; k < i; k++) {
            if (a.data[k] == a.data[i]) {
                trung = true;
                break;
            }
        }
        if (!trung) {
            cout << a.data[i] << " ";
        }
    }

    for (int i = 0; i < b.size; i++) {
        bool trung = false;

        for (int k = 0; k < i; k++) {
            if (b.data[k] == b.data[i]) {
                trung = true;
                break;
            }
        }
        if (trung) continue;
        bool bo = false;
        for (int j = 0; j < a.size; j++) {
            if (b.data[i] == a.data[j]) {
                bo = true;
                break;
            }
        }
        if (!bo) {
            cout << b.data[i] << " ";
        }
    }
    cout << endl;
}

// Tính tổng các phần tử của 2 tập hợp
void tong(set& a, set& b) {
    cout << "Tong cac phan tu cua 2 tap hop: ";
    int tong = 0;
    for (int i = 0; i < a.size; i++) {
        tong += a.data[i];
    }
    for (int i = 0; i < b.size; i++) {
        tong += b.data[i];
    }
    cout << tong << endl;
}

// Tính hiệu các phần tử của 2 tập hợp (A - B)
void hieu(set& a, set& b) {
    cout << "Hieu cac phan tu cua 2 tap hop (A - B): ";
    int hieuA = 0, hieuB = 0;

    for (int i = 0; i < a.size; i++) {
        hieuA += a.data[i];
    }

    for (int i = 0; i < b.size; i++) {
        hieuB += b.data[i];
    }

    cout << hieuA - hieuB << endl;
}

int main() {
    set a, b;
    input(a);
    input(b);
    output(a);
    output(b);
    cout << "Tong cua tap hop a: " << total(a) << endl;
    cout << "Tong cua tap hop b: " << total(b) << endl;
    Songuyento(a);
    Songuyento(b);
    sapxep(a);
    sapxep(b);
    giao(a, b);
    hop(a, b);
    tong(a, b);
    hieu(a, b);
    return 0;
}