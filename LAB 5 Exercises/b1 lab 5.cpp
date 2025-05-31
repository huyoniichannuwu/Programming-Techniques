// b1 lab 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <math.h>
using namespace std;
struct point {
    double x, y;
    void nhap() {
        cout << "Nhap truc hoanh: ";
        cin >> x;
        cout << "Nhap truc tung: ";
        cin >> y;
    }
    void xuat() {
        cout << "toa do point x:" << x << endl;
        cout << "toa do point y:" << y << endl;
    }
};
struct segment {
    point a, b;
    void nhap() {
        cout << "Nhap toa do A:" << endl;
        a.nhap();
        cout << "Nhap toa do B:" << endl;
        b.nhap();
    }
    void xuat() {
        cout << "Toa do A la: ";
        a.xuat();
        cout << "Toa do B la: ";
        b.xuat();
    }
};
struct line {
    double a, b, c;
    void nhap() {
        cout << "Nhap PT duong thang:";
        cin >> a >> b >> c;
    }
    void xuat() {
        cout << "PT duong thang tren: " << a << "x + " << b << "y + " << c << " = 0" << endl;
    }
};
struct parabol {
    double a, b, c;
    void nhap() {
        cout << "Nhap phuong trinh parabol: ";
        cin >> a >> b >> c;
    }
    void xuat() {
        cout << "PT parabol: y = " << a << "x^2 + " << b << "x + " << c << endl;
    }
};
struct vectors {
    point s, t;
    void nhap() {
        cout << "Nhap diem bat dau:";
        s.nhap();
        cout << "Nhap diem ket thuc:";
        t.nhap();
    }
    void xuat() {
        cout << "Vector tu ";
        s.xuat();
        cout << " den ";
        t.xuat();
        cout << endl;
    }
};
double khoangCach(point p1, point p2) {
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) +
        (p2.y - p1.y) * (p2.y - p1.y));
};
struct triangle {
    point A, B, C;
    double ab = khoangCach(A, B);
    double bc = khoangCach(B, C);
    double ca = khoangCach(C, A);
    double dienTich = (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2.0;
    double chuvi = ab + bc + ca;
    bool dieukienTamGiac() {

        if (dienTich < 0) dienTich = -dienTich;
        return dienTich > 0.001;
    }
    void nhap() {
        do {
            cout << "Nhap toa do 3 diem A,B,C:";
            A.nhap();
            B.nhap();
            C.nhap();
            if (!dieukienTamGiac()) {
                cout << "3 diem nay khong tao thanh tam giac! Nhap lai.\n";
            }
        } while (!dieukienTamGiac());
    }
    void xuat() {
        cout << "Toa do 3 dinh cua tam giac:";
        A.xuat();
        B.xuat();
        C.xuat();
        cout << "Dien tich tam giac la: " << dienTich;
        cout << "Chu vi tam giac la: " << chuvi;
    }
};

struct rectangle {
    point diem[4];

    void nhap() {
        cout << "Nhap 4 dinh hinh chu nhat:\n";
        for (int i = 0; i < 4; i++) {
            cout << "Diem " << (i + 1) << ":\n";
            diem[i].nhap();
        }
    }

    void xuat() {
        cout << "Hinh chu nhat voi 4 dinh:\n";
        for (int i = 0; i < 4; i++) {
            cout << "Diem " << (i + 1) << ": ";
            diem[i].xuat();
            cout << endl;
        }
    }
    double dienTich() {
        double canh1 = khoangCach(diem[0], diem[1]);
        double canh2 = khoangCach(diem[1], diem[2]);
        return canh1 * canh2;
    }
    double chuvi() {
        double canh1 = khoangCach(diem[0], diem[1]);
        double canh2 = khoangCach(diem[1], diem[2]);
        return 2 * (canh1 + canh2);
    }
};
struct circle {
    point a;
    double bk;
    void nhap() {
        cout << "Nhap tam duong tron:";
        a.nhap();
        cout << "Nhap ban kinh duong tron:";
        cin >> bk;
    }
    void xuat() {
        cout << "tam duong tron la:";
        a.xuat();
        cout << "Ban kinh duong trong la:" << bk;
    }
    double dienTich() {
        return bk * bk * 3.14;
    }
    double chuvi() {
        return bk * 2 * 3.14;
    }
};
struct convex_poly {
    point diem[20];
    int soDiem;
    bool kiemTraLoi() {
        if (soDiem < 3) return false;

        bool duong = false, am = false;

        for (int i = 0; i < soDiem; i++) {
            int j = (i + 1) % soDiem;
            int k = (i + 2) % soDiem;

            double tich = (diem[j].x - diem[i].x) * (diem[k].y - diem[j].y) -
                (diem[j].y - diem[i].y) * (diem[k].x - diem[j].x);

            if (tich > 0) duong = true;
            if (tich < 0) am = true;

            if (duong && am) return false;
        }

        return true;
    }

    void nhap() {
        do {
            cout << "Nhap so dinh (3-20): ";
            cin >> soDiem;
        } while (soDiem < 3 || soDiem > 20);

        do {
            cout << "Nhap toa do cac dinh:\n";
            for (int i = 0; i < soDiem; i++) {
                cout << "Diem " << (i + 1) << ":\n";
                diem[i].nhap();
            }

            if (!kiemTraLoi()) {
                cout << "Da giac nay khong loi! Nhap lai.\n";
            }
        } while (!kiemTraLoi());
    }

    void xuat() {
        cout << "Da giac loi co " << soDiem << " dinh:\n";
        for (int i = 0; i < soDiem; i++) {
            cout << "Diem " << (i + 1) << ": ";
            diem[i].xuat();
            cout << endl;
        }
    }
};
void dodai(segment huy) {
    double dai = sqrt((huy.b.x - huy.a.x) * (huy.b.x - huy.a.x) + (huy.b.y - huy.a.y) * (huy.b.y - huy.a.y));
    cout << "Do dai: " << dai << endl;
};
void kc(line huy, point huynh) {
    double tuso = abs(huy.a * huynh.x + huy.b * huynh.y + huy.c);
    double mauso = sqrt(huy.a * huy.a + huy.b * huy.b);
    if (mauso == 0) {
        cout << "Duong thang khong hop le (A = B = 0)." << endl;
    }
    else {
        double D = tuso / mauso;
        cout << "Khoang cach tu diem den duong thang la: " << D << endl;
    }
};
void goc(vectors huy, vectors huynh) {
    double x1 = huy.t.x - huy.s.x;
    double y1 = huy.t.y - huy.s.y;
    double x2 = huynh.t.x - huynh.s.x;
    double y2 = huynh.t.y - huynh.s.y;
    double dot = x1 * x2 + y1 * y2;
    double doDaiA = sqrt(x1 * x1 + y1 * y1);
    double doDaiB = sqrt(x2 * x2 + y2 * y2);
    double cosTheta = dot / (doDaiA * doDaiB);
    double theta = acos(cosTheta);
    cout << "Goc giua 2 vector la: " << theta;
};
bool ganBang(double a, double b, double epsilon = 1e-6) {
    return fabs(a - b) < epsilon;
};
void swap(double a, double b) {
    double tmp = a;
    a = b;
    b = tmp;
};

void tinhDoDaiCanh(const triangle& t, double& ab, double& bc, double& ca) {
    ab = khoangCach(t.A, t.B);
    bc = khoangCach(t.B, t.C);
    ca = khoangCach(t.C, t.A);
};
void xacdinhloaitamgiac(triangle huy) {
    double a, b, c;
    tinhDoDaiCanh(huy, a, b, c);
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (ganBang(a, b) && ganBang(b, c)) {
        cout << "Tam giac deu." << endl;
        return;
    }
    bool vuong = ganBang(a * a + b * b, c * c);
    bool can = ganBang(a, b) || ganBang(b, c) || ganBang(a, c);
    if (vuong && can) {
        cout << "Tam giac vuong can." << endl;
    }
    else if (vuong) {
        cout << "Tam giac vuong." << endl;
    }
    else if (can) {
        cout << "Tam giac can." << endl;
    }
    else {
        cout << "Tam giac thuong." << endl;
    }
};
void menu() {
    cout << "\nGeometry Exercise";
    cout << "1. Tao diem\n";
    cout << "2. Tao doan thang\n";
    cout << "3. Tao duong thang\n";
    cout << "4. Tao parabol\n";
    cout << "5. Tao vector\n";
    cout << "6. Tao tam giac\n";
    cout << "7. Tao hinh chu nhat\n";
    cout << "8. Tao hinh tron\n";
    cout << "9. Tao da giac loi\n";
    cout << "0. Thoat\n";
    cout << "Chon: ";
};

int main() {
    int choose;

    do {
        menu();
        cin >> choose;

        if (choose == 1) {
            point p;
            p.nhap();
            cout << "\nDiem da tao: ";
            p.xuat();
            cout << endl;
        }
        else if (choose == 2) {
            segment s;
            s.nhap();
            cout << "\nDoan thang da tao:\n";
            s.xuat();
            dodai(s);
        }
        else if (choose == 3) {
            line l;
            l.nhap();
            cout << "\nDuong thang da tao:\n";
            l.xuat();
        }
        else if (choose == 4) {
            parabol p;
            p.nhap();
            cout << "\nParabol da tao:\n";
            p.xuat();
        }
        else if (choose == 5) {
            vectors v;
            v.nhap();
            cout << "\nVector da tao:\n";
            v.xuat();
        }
        else if (choose == 6) {
            triangle t;
            t.nhap();
            cout << "\nTam giac da tao:\n";
            t.xuat();
        }
        else if (choose == 7) {
            rectangle r;
            r.nhap();
            cout << "\nHinh chu nhat da tao:\n";
            r.xuat();
        }
        else if (choose == 8) {
            circle c;
            c.nhap();
            cout << "\nHinh tron da tao:\n";
            c.xuat();
        }
        else if (choose == 9) {
            convex_poly poly;
            poly.nhap();
            cout << "\nDa giac loi da tao:\n";
            poly.xuat();
        }
        else if (choose == 0) {
            cout << "Tam biet!\n";
        }
        else {
            cout << "Chon sai! Thu lai.\n";
        }

        if (choose != 0) {
            cout << "\nNhan Enter de tiep tuc...";
            cin.ignore();
            cin.get();
        }

    } while (choose != 0);


    return 0;
}
