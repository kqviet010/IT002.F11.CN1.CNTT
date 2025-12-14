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
    cin >> dt1;

    cout << "\n================= NHAP DA THUC 2 ==================\n";
    cin >> dt2;


    cout << "\n================= XUAT DA THUC 1 ==================\n";
    cout << dt1;

    cout << "\n\n================= XUAT DA THUC 2 ==================\n";
    cout << dt2;

    cout << "\n\n================= TONG HAI DA THUC ==================\n";
    kq = dt1 + dt2;
    cout << kq;

    cout << "\n\n================= HIEU HAI DA THUC ==================\n";
    kq = dt1 - dt2;
    cout << kq;

    cout << "\n\n================= TINH GIA TRI DA THUC 1 ==================\n";
    cout << "Nhap x: ";
    cin >> x;
    cout << "Gia tri: " << dt1.tinhDaThuc(x);

    return 0;
}