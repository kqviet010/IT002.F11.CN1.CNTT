// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

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

istream& operator>>(istream& is, Ngay& tg){
    cout << "Nhap ngay: ";
    is >> tg.ngay;
    cout << "Nhap thang: ";
    is >> tg.thang;
    cout << "Nhap nam: ";
    is >> tg.nam;
    while(tg.checkHopLe() == false) {
        cout << "\nNgay ban nhap ko hop le!!\n";
        cout << "Vui long nhap lai...\n";

        cout << "Nhap ngay: ";
        is >> tg.ngay;
        cout << "Nhap thang: ";
        is >> tg.thang;
        cout << "Nhap nam: ";
        is >> tg.nam;
    };  
    return is;
}

ostream& operator<<(ostream& os, const Ngay tg){
    os << tg.ngay << "/" << tg.thang << "/" << tg.nam << endl;
    return os;
}

Ngay operator+(Ngay tg, int so_ngay) {
    tg.ngay += so_ngay; 

    while (true) {
        int daysInCurrentMonth;
        
        if (tg.thang == 4 || tg.thang == 6 || tg.thang == 9 || tg.thang == 11)
            daysInCurrentMonth = 30;
        else if (tg.thang == 2) {
            bool isLeap = (tg.nam % 4 == 0 && tg.nam % 100 != 0) || (tg.nam % 400 == 0);
            daysInCurrentMonth = isLeap ? 29 : 28;
        } else {
            daysInCurrentMonth = 31;
        }


        if (tg.ngay <= daysInCurrentMonth) {
            break;
        }

        tg.ngay -= daysInCurrentMonth;
        tg.thang++;

        if (tg.thang > 12) {
            tg.thang = 1;
            tg.nam++;
        }
    }

    return tg; 
}

Ngay operator-(Ngay tg, int so_ngay) {
    Ngay kq = tg;
    kq.ngay -= so_ngay; // Trừ thẳng vào ngày

    // Xử lý khi ngày bị âm hoặc bằng 0 (lùi về tháng trước)
    while (kq.ngay <= 0) {
        kq.thang--; // Lùi tháng
        
        if (kq.thang < 1) { // Nếu lùi quá tháng 1 thì về tháng 12 năm trước
            kq.thang = 12;
            kq.nam--;
        }

        kq.ngay += tg.soNgayTrongThang();
    }
    return tg;
}

void operator++(Ngay& tg){
    // Lấy số ngày tối đa của tháng hiện tại
    int soNgayToiDa = tg.soNgayTrongThang();

    // TH1: Ngày chưa phải là cuối tháng
    if (tg.ngay < soNgayToiDa) {
        tg.ngay++; // Chỉ cần tăng ngày lên 1
    }
    // TH2: Ngày là cuối tháng
    else {
        tg.ngay = 1; // Đặt ngày về 1
        
        // TH2.a: Tháng chưa phải là cuối năm (tháng 12)
        if (tg.thang < 12) {
            tg.thang++; // Tăng tháng lên 1
        }
        // TH2.b: Ngày cuối cùng của năm (31/12)
        else {
            tg.thang = 1; // Đặt tháng về 1
            tg.nam++;   // Tăng năm lên 1
        }
    }
}
void operator--(Ngay& tg){
    // Lấy số ngày tối đa của tháng hiện tại
    int soNgayToiDa = tg.soNgayTrongThang();

    // TH1: Ngày chưa phải là ngay dau tien
    if (tg.ngay != 1){
        tg.ngay--;
    }
    else {
        if (tg.thang != 1) {
            tg.thang--;
            tg.ngay = tg.soNgayTrongThang();
        }
        else {
            tg.ngay = 31;
            tg.thang = 12;
            tg.nam--;
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
