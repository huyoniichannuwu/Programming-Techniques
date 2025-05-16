// b3 lab 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//trò chơi oẳn tù tì với quy ước: Búa = ‘B’; Bao = ‘O’; Kéo =‘K’, Xuất ra màn hình câu thông báo người chơi nào thắng hoặc hòa. 
// Nhập vào hai ký tự đại diện cho hai player
#include <iostream>
#include <cctype> //toupper(chu in)
using namespace std;
int main()        //Nhap du lieu
{
    const char BUA = 'B',BAO='O', KEO = 'K';
    char x, y;
    cout << " Nguoi choi mot ra(B/O/K): "; cin >> x;
    cout << " Nguoi choi hai ra(B/O/K): "; cin >> y;
    
    //chu in
    x = toupper(x);          
    y = toupper(y);
    
    //Kiem tra ket qua(dieu kien win, lose, draw, wrong input)
    if (x == y)
        cout << " Ket qua hoa\n";
    else if
        ((x == BUA && y == KEO) ||
            (x == KEO && y == BAO) ||
            (x == BAO && y == BUA))
    {
        cout << " Nguoi choi mot thang\n";
    }

    else if
        ((x == KEO && y == BUA) ||
            (x == BAO && y == KEO) ||
            (x == BUA && y == BAO))
    {
        cout << "Nguoi choi hai thang\n";
    }
    else {
        cout << "nhap sai du lieu, vui long nhap B/O/K\n";
    }
    return 0; 
}



