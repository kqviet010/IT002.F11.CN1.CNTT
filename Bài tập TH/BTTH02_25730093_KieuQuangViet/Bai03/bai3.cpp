// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main(){
    SoPhuc a, b, kq;

    cout << "===========NHAP HAI SO PHUC============\n";
    a.Nhap();
    b.Nhap();

    cout << "\n===========XUAT HAI SO PHUC============\n";
    cout << "a = ";
    a.Xuat();
    cout << "b = ";
    b.Xuat();

    cout << "\n===========CONG HAI SO PHUC A + B============\n";
    kq = a.Cong(b);
    kq.Xuat();

    cout << "\n===========TRU HAI SO PHUC A - B============\n";
    kq = a.Tru(b);
    kq.Xuat();

    cout << "\n===========NHAN HAI SO PHUC A * B============\n";
    kq = a.Nhan(b);
    kq.Xuat();

    cout << "\n===========CHIA HAI SO PHUC A / B============\n";
    kq = a.Chia(b);
    kq.Xuat();

    return 0;
}