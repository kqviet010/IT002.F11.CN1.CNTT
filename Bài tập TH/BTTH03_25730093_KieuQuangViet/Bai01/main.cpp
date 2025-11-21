// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "cDSPhanSo.h"
using namespace std;

int main(){
    cDSPhanSo dsPhanSo;
    cPhanSo kq;

    cout << "============= NHAP DANH SACH ===================================\n";
    dsPhanSo.Nhap();

    cout << "\n============= XUAT DANH SACH ===================================\n";
    dsPhanSo.Xuat();

    cout << "\n============= TINH TONG =========================================\n";
    kq = dsPhanSo.tinhTong();
    kq.Xuat();

    cout << "\n============= TIM PHAN SO LON NHAT =============================\n";
    kq = dsPhanSo.timMax();
    kq.Xuat();

    cout << "\n============= TIM PHAN SO NHO NHAT  =============================\n";
    kq = dsPhanSo.timMin();
    kq.Xuat();

    cout << "\n============= TIM PHAN SO CO TU SO LA SNT MAX  =================\n";
    kq = dsPhanSo.timTuSNTMax();
    if (kq.getTuSo() == -1 && kq.getValue() == -1)
        cout << "Not found.\n";
    else
        kq.Xuat();

    cout << "\n============= SX TANG  =========================================\n";
    dsPhanSo.sxTang();
    dsPhanSo.Xuat();

    cout << "\n============= SX GIAM  =========================================\n";
    dsPhanSo.sxGiam();
    dsPhanSo.Xuat();

    return 0;
}