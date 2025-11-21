// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

int main(){
    Vehicle xe1("Nguyen An", "Tesla", 4500, 150);
    Vehicle xe2("Nguyen Thuy", "Wave", 3500, 120);
    Vehicle xe3;
    
    cout << "==========NHAP THONG TIN CHO XE 3==========\n";
    xe3.Nhap();

    cout << "\n\n==========XUAT THONG TIN CHO XE 1==========\n";
    xe1.Xuat();
    cout << "Thue truoc ba: " << xe1.tinhThue() << endl;

    cout << "\n\n==========XUAT THONG TIN CHO XE 2==========\n";
    xe2.Xuat();
    cout << "Thue truoc ba: " << xe2.tinhThue() << endl;

    cout << "\n\n==========XUAT THONG TIN CHO XE 3==========\n";
    xe3.Xuat();
    cout << "Thue truoc ba: " << xe3.tinhThue() << endl;

    return 0;
}
