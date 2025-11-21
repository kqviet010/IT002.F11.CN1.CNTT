// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <string>
#include "cDSNhanVienSX.h"
using namespace std;

int main(){
    cDSNhanVienSX dsnv;

    cout << "================= NHAP NHAN VIEN ==================\n";
    dsnv.Nhap();

    cout << "\n================= XUAT NHAN VIEN ==================";
    dsnv.Xuat();

    cout << "\n\n============ TINH TONG LUONG CAN TRA =============\n";
    cout << "Total Salary: " << dsnv.tongLuong(); 

    cout << "\n\n========== NHAN VIEN CAO TUOI NHAT ===========\n";
    dsnv.nvTuoiCaoNhat();

    cout << "\n\n========== NHAN VIEN CO LUONG THAP NHAT ===========\n";
    dsnv.nvLuongThapNhat();

    cout << "\n\n============ SAP XEP NHAN VIEN THEO LUONG =============\n";
    dsnv.sxNhanVien_TangDanTheoLuong();
    dsnv.Xuat();
    
    return 0;
}