// bai 16 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//PT bac 2 ax2+bx+c=0

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a, b, c;
        cout << "Nhap a, b, c trong PT bac 2 (ax^2 + bx + c): "; cin >> a >> b >> c;
        if (a == 0) {
           
            if (b == 0) {
                
                if (c == 0) {
                    cout << "PT VO SO NGHIEM\n";
                }
                else {
                    cout << "PT VO NGHIEM\n";
                }
            }
            else {
                cout << "PT CO MOT NGHIEM DON\n";
            }
        }
        else {
            double delta = b * b - 4 * a * c;
            if (delta > 0) {
                double nghiemmot = (-b + sqrt(delta)) / (2 * a);
                double nghiemhai = (-b - sqrt(delta)) / (2 * a);
                cout << "PT CO 2 NGHIEM PHAN BIET X1 = " << nghiemmot << " VA X2 = " << nghiemhai << endl;
            }
            else if (delta == 0) {
                double nghiemkep = -b / 2*a;
                cout << "PT CO 1 NGHIEM KEP X = X' = " << nghiemkep << endl;
            }
            else {
                cout << "PT VO NGHIEM" << endl; 
            }
        }
}


