// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main(){
    ThoiGian tg, kq;
    int second;
    cout << "=============NHAP VAO THOI GIAN=============" << endl;
    cout << "Nhap thoi gian:" << endl;
    cin >> tg;

    cout << "\n==========XUAT THOI GIAN VUA NHAP==========" << endl;
    cout << "Thoi gian (tg): ";
    cout << tg;

    cout << "\n==========TONG HAI THOI GIAN VUA NHAP tg + so giay==========" << endl;
    cout << "Nhap so giay: ";
    cin >> second;

    cout << "Tong thoi gian: ";
    kq = tg + second;
    cout << kq;

    cout << "\n==========HIEU HAI THOI GIAN VUA NHAP tg - so giay==========" << endl;
    cout << "Nhap so giay: ";
    cin >> second;

    cout << "Tong thoi gian: ";
    kq = tg - second;
    cout << kq;

    cout << "\n==========Tang thoi gian len 1 giay==========" << endl;
    cout << ++tg;

    cout << "\n==========Giam thoi gian len 1 giay==========" << endl;
    cout << --tg;

    return 0;
}