#include <iostream>
#include <string>
#include "Ngay.h"
using namespace std;

// Constructor
Ngay::Ngay(int d, int m, int y){
    ngay = d;
    thang = m;
    nam = y;
}


// Ham get, set
int Ngay::getNgay(){
    return ngay;
}
int Ngay::getThang(){
    return thang;
}
int Ngay::getNam(){
    return nam;
}

void Ngay::setNgay(int d){
    ngay = d;
}
void Ngay::setThang(int m){
    thang = m;
}
void Ngay::setNam(int y){
    nam = y;
}


// Ham chuc nang
bool Ngay::checkHopLe(){
    int ngayToiDa = this->soNgayTrongThang();
    if (thang < 1 || thang > 12 || ngay < 1 || ngay > ngayToiDa || nam <= 0)
        return false;
    else
        return true;
}

void Ngay::Nhap(){
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    while(this->checkHopLe() == false) {
        cout << "\nNgay ban nhap ko hop le!!\n";
        cout << "Vui long nhap lai...\n";

        cout << "Nhap ngay: ";
        cin >> ngay;
        cout << "Nhap thang: ";
        cin >> thang;
        cout << "Nhap nam: ";
        cin >> nam;
    };
}

void Ngay::Xuat(){
    cout << ngay << "/" << thang << "/" << nam << endl;
}

void Ngay::tangMotNgay(){
    // Lấy số ngày tối đa của tháng hiện tại
    int soNgayToiDa = this->soNgayTrongThang();

    // TH1: Ngày chưa phải là cuối tháng
    if (ngay < soNgayToiDa) {
        ngay++; // Chỉ cần tăng ngày lên 1
    }
    // TH2: Ngày là cuối tháng
    else {
        ngay = 1; // Đặt ngày về 1
        
        // TH2.a: Tháng chưa phải là cuối năm (tháng 12)
        if (thang < 12) {
            thang++; // Tăng tháng lên 1
        }
        // TH2.b: Ngày cuối cùng của năm (31/12)
        else {
            thang = 1; // Đặt tháng về 1
            nam++;   // Tăng năm lên 1
        }
    }
}
void Ngay::giamMotNgay(){
    // Lấy số ngày tối đa của tháng hiện tại
    int soNgayToiDa = this->soNgayTrongThang();

    // TH1: Ngày chưa phải là ngay dau tien
    if (ngay != 1){
        ngay--;
    }
    else {
        if (thang != 1) {
            thang--;
            ngay = this->soNgayTrongThang();
        }
        else {
            ngay = 31;
            thang = 12;
            nam--;
        }
    }
}
void Ngay::layThu(){
    // 1. Mảng "chỉ số" cho 12 tháng
    //         T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12
    int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4,  6,  2,  4};

    // 2. Tên các thứ, tương ứng với kết quả (0 = CN, 1 = T2, ...)
    string thuTrongTuan[] = {
        "Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"
    };

    // 3. Điều chỉnh năm nếu là tháng 1 hoặc tháng 2
    int nam_dc = nam;
    if (thang < 3) {
        nam_dc = nam - 1;
    }

    // 4. Áp dụng công thức toán học
    // (Year + Year/4 - Year/100 + Year/400 + MagicMonth + Day) % 7
    int ketQua = (nam_dc + nam_dc / 4 - nam_dc / 100 
        + nam_dc / 400 + t[thang - 1] + ngay) % 7;

    // 5. In kết quả
    cout << "Ngay " << ngay << "/" << thang << "/" << nam 
            << " la: " << thuTrongTuan[ketQua] << endl;

}
bool Ngay::ktNamNhuan(){
    return (nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0);
}

int Ngay::soNgayTrongThang(){
    switch (thang) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            // Nếu tháng 2, kiểm tra xem có phải năm nhuận không
            if (this->ktNamNhuan()) {
                return 29;
            } else {
                return 28;
            }
        default:
            return 0;
    }
}

// Destructor
Ngay::~Ngay(){}