// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;


int main(){
    String str1, str2, kq;

    cout << "============== NHAP CHUOI ===============\n";
    cout << "Nhap chuoi 1 - ";
    str1.Nhap();
    cout << "Nhap chuoi 2 - ";
    str2.Nhap();

    cout << "\n============== XUAT CHUOI ===============\n";
    str1.Xuat();
    cout << endl;
    str2.Xuat();

    cout << "\n\n============== XUAT THONG TIN LIEN QUAN ===============\n";
    cout << "Do dai chuoi 1: " << str1.len() << endl;
    cout << "Do dai chuoi 2: " << str2.len();

    cout << "\n\n======== NOI HAI CHUOI ========\n";
    kq = str1.noiHaiChuoi(str2);
    kq.Xuat();

    cout << "\n\n======== DAO CHUOI 1 ========\n";
    kq = str1.daoChuoi();
    kq.Xuat();

    cout << "\n\n======== CHUYEN HOA CHUOI 1 ========\n";
    kq = str1.chuyenChuHoa();
    kq.Xuat();

    // Dòng này sẽ chờ bạn nhấn phím Enter
    cout << "\n\nNhan Enter de thoat..." << endl;
    cin.get();

    return 0;
}