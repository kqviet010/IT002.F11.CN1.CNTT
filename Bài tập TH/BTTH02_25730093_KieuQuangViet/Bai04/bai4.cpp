// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "ThoiGian.h"
using namespace std;

int main(){
    ThoiGian t1, t2, tTong, tHieu;
    cout << "=============NHAP VAO HAI THOI GIAN=============" << endl;
    cout << "Nhap thoi gian thu nhat(t1):" << endl;
    t1.nhapThoiGian();
    cout << "\nNhap thoi gian thu hai(t2):" << endl;
    t2.nhapThoiGian();

    cout << "\n==========XUAT HAI THOI GIAN VUA NHAP==========" << endl;
    cout << "Thoi gian thu nhat(t1): ";
    t1.xuatThoiGian();
    cout << "Thoi gian thu hai(t2): ";
    t2.xuatThoiGian(); 

    cout << "\n==========TONG HAI THOI GIAN VUA NHAP t1 + t2==========" << endl;
    tTong = t1.tangThoiGian(t2);
    cout << "Tong hai thoi gian: ";
    tTong.xuatThoiGian();

    cout << "\n==========HIEU HAI THOI GIAN VUA NHAP t1 - t2==========" << endl;
    tHieu = t1.giamThoiGian(t2);
    cout << "Tong hai thoi gian: ";
    tHieu.xuatThoiGian();

    return 0;
}