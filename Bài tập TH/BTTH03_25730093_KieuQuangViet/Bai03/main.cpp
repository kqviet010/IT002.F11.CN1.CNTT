// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cmath>
#include "TamGiac.h"
using namespace std;

int main(){
    TamGiac tg;
    Point v;
    float hs;

    cout << "================ NHAP TAM GIAC =================\n";
    tg.Nhap();

    cout << "\n================ XUAT TAM GIAC =================\n";
    tg.Xuat();

    cout << "\n================ TAM GIAC LOAI=================\n";
    tg.kiemtraLoaiTamGiac();

    cout << "\n============== CHU VI & DIEN TICH===============\n";
    cout << "[P]  " << tg.tinhChuVi() << endl;
    cout << "[S]  " << tg.tinhDienTich() << endl;

    cout << "\n============== TINH TIEN THEO VECTOR ===============\n";
    cout << "Nhap vector: \n";
    v.Nhap();
    tg.tinhTienTG(v);
    tg.Xuat();

    cout << "\n========= PHONG TO (> 1), THU NHO (< 1) ===========\n";
    cout << "Nhap he so: ";
    cin >> hs;
    tg.PhongTo_ThuNho(hs);
    tg.Xuat();

    return 0;
}