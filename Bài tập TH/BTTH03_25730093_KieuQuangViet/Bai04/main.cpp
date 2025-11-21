// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cmath>
#include "DaGiac.h"
using namespace std;

int main(){
    DaGiac dg;
    Point v;
    float heso;

    cout << "================ NHAP DA GIAC =================\n";
    dg.Nhap();

    cout << "\n================ XUAT DA GIAC =================\n";
    dg.Xuat();

    cout << "\n============== CHU VI & DIEN TICH===============\n";
    cout << "[P]  " << dg.tinhChuVi() << endl;
    cout << "[S]  " << dg.tinhDienTich() << endl;

    cout << "\n============== TINH TIEN THEO VECTOR ===============\n";
    cout << "Nhap vector: \n";
    v.Nhap();
    dg.tinhTienDG(v);
    dg.Xuat();

    cout << "\n========= PHONG TO (> 1), THU NHO (< 1) ===========\n";
    cout << "Nhap he so: ";
    cin >> heso;
    dg.PhongTo_ThuNho(heso);
    dg.Xuat();

    return 0;
}