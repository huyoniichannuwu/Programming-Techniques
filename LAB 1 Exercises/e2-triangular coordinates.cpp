// toa do tam giac.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1, y1, x2, y2, x3, y3, p;

    cout << "Nhap toa do A(x1, y1): " << endl; // TOA DO A
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    
    cout << "Nhap toa do B(x2, y2): " << endl; // TOA DO B
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;

    cout << "Nhap toa do C(x3, y3): " << endl; // TOA DO C
    cout << "x3= ";
    cin >> x3;
    cout << "y3= ";
    cin >> y3;
    
    // TINH DO DAI AB,AC,BC
    double DodaiAB = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
    cout << "\nAB = " << DodaiAB;

    double DodaiAC = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    cout << "\nAC = " << DodaiAC;

    double DodaiBC = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    cout << "\nBC = " << DodaiBC;
    
    //CHU VI ABC
    double ChuviABC = DodaiAB + DodaiAC + DodaiBC;
    cout << "\nChu vi ABC = " << ChuviABC; 
    
    //DIEN TICH ABC 
    p = ChuviABC / 2;                                                 //nua chu vi
   //cong thuc heron
    double DientichABC = sqrt(p * (p - DodaiAB) * (p - DodaiAC) * (p - DodaiBC));
    cout << "\n,Dien tich ABC = " << DientichABC << endl;
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
