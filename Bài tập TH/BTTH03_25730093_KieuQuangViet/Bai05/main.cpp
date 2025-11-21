// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "DaThuc.h"
using namespace std;

int main(){
    DaThuc dt1, dt2, kq;
    float x;

    cout << "================= NHAP DA THUC 1 ==================\n";
    dt1.Nhap();

    cout << "\n================= NHAP DA THUC 2 ==================\n";
    dt2.Nhap();


    cout << "\n================= XUAT DA THUC 1 ==================\n";
    dt1.Xuat();

    cout << "\n\n================= XUAT DA THUC 2 ==================\n";
    dt2.Xuat();

    cout << "\n\n================= TONG HAI DA THUC ==================\n";
    kq = dt1.Cong(dt2);
    kq.Xuat();

    cout << "\n\n================= HIEU HAI DA THUC ==================\n";
    kq = dt1.Tru(dt2);
    kq.Xuat();

    cout << "\n\n================= TINH GIA TRI DA THUC 1 ==================\n";
    cout << "Nhap x: ";
    cin >> x;
    cout << "Gia tri: " << dt1.tinhDaThuc(x);

    return 0;
}