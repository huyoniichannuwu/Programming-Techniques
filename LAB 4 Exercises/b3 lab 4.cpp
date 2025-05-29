// b3 lab 4.cpp : This file contains the 'main' function. Program execution begins and ends there.

//tìm giá trị trùng nhau và cho biết nó lặp lại mấy lần


/*int main()
{
    int Huy[100], n;    //mảng tĩnh
    cout << "Nhap n phan tu: "; cin >> n;
    int* p = nullptr;
    int* demtrunglap = nullptr;
    p = new int[n];     //mảng động
    demtrunglap = new int[n];
    
    int c = 0;
    for (int* i = p; i < p + n; i++)        //tạo phần tử trong mảng
    {
        cout << "Phan tu thu " << c++ << " la ";
        cin >> *i;
        demtrunglap[i - p] = 1;             //ban dau
    }
    //for (int* i = p; i < p + n; i++)      //output ra can phan tu
        //cout << *i << '\t';
    for (int* i = p; i < p + n; i++)        //so trung lap
    {
        if (demtrunglap[*i] == -1) continue;    //nhớ
        for (int* j = i+1; j < p + n; j++)
            if (*i == *j) {                     //nhớ
                demtrunglap[i - p]++;           //nhớ
                demtrunglap[j - p] = -1;        //nhớ
            }
        
    }

    bool sutrunglap = false;
    for(int*i=p;i<p+n;i++)
    {
        if (demtrunglap[i - p] > 1) {                  //nhớ
            cout << "Phan tu " << p[i - p] << " bi trung lap " << demtrunglap[i - p] << " lan" << endl;
            sutrunglap = true;                            //nhớ
        }
    }
    
    if (!sutrunglap) {                                    //nhớ
        cout << "Khong co so bi trung" << endl;
     }
    delete[] demtrunglap;
    delete[] p;
    return 0;
}*/

//Cho dãy số nguyên a và số nguyên x nhập từ bàn phím. 
//Hãy tìm cách lấy trong a các số sao cho đảm bảo rằng tổng của chúng nhỏ hơn x]  [số phần tử lấy từ a càng nhiều càng tốt.] dieu kien
/*#include <iostream>
#include <math.h>
using namespace std;
void TangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int Huy[100];
    int n,x;
    cout << "Nhap n phan tu cua day so nguyen: "; cin >> n;
    
    int* a = new int[n];        //mảng động dãy số nguyên a
    int c = 0;
    for (int* i = a; i < a + n; i++)   //tạo phần tử trong mảng
    {
        cout << "Phan tu thu " << c++ << " la ";
        cin >> *i;
    }
    cout << "Nhap so nguyen x: "; cin >> x;
    TangDan(a, n);
    int tong = 0, count = 0;
    cout << "Cac phan tu duoc chon:\n";
    for (int i = 0; i < n; i++) {
        if (tong + a[i] < x) {
            tong += a[i];
            cout << a[i] << " ";
            count++;
        }
        else {
            break;
        }
    }

    cout << "\ncac phan tu da chon: " << count << endl;
    cout << "Tong cua chung la: " << tong << endl;

    return 0;
}*/

#include <iostream>
#include <math.h>
using namespace std;
void sapxeptangdan(int* a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(a + j) > *(a + j + 1)) {
                int luu = *(a + j);
                *(a + j) = *(a + j + 1);
                *(a + j + 1) = luu;
            }
        }
    }
}
void laytronga(int* a, int n, int x)
{
    int tong = 0;
    cout << "cac so trong a sao cho tong chung nho hon x va lay duoc nhieu phan tu nhat la: ";
    for (int i = 0; i < n; i++)
    {
        if (tong + *(a + i) < x)
        {
            tong += *(a + i);
            cout << *(a + i) << "  ";
        }
    }
}
int main()
{
    int x;
    int n;
    cout << "nhap n:";
    cin >> n;
    int* a = new int[n];
    cout << "nhap so nguyen x:";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
    sapxeptangdan(a, n);
    laytronga(a, n, x);
    delete[] a;
}


