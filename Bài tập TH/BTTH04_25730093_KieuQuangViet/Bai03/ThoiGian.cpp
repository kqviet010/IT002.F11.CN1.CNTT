// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "ThoiGian.h"
using namespace std;

// Constructor
ThoiGian::ThoiGian(int h, int m, int s){
    gio = h;
    phut = m;
    giay = s;
}

// Ham get, set
int ThoiGian::getGio(){
    return gio;
}
int ThoiGian::getPhut(){
    return phut;
}
int ThoiGian::getGiay(){
    return giay;
}

void ThoiGian::setGio(int h){
    gio = h;
}
void ThoiGian::setPhut(int m){
    phut = m;
}
void ThoiGian::setGiay(int s){
    giay = s;
}

// Ham chuc nang
istream& operator>>(istream& is, ThoiGian& tg){
    cout << "Nhap gio: ";
    is >> tg.gio;
    while (tg.gio < 0) {
        cout << "Gio khong hop le. Vui long nhap lai: ";
        is >> tg.gio;
    }

    cout << "Nhap phut: ";
    is >> tg.phut;
    while (tg.phut < 0 || tg.phut >= 60) {
        cout << "Phut khong hop le. Vui long nhap lai: ";
        cin >> tg.phut;
    }

    cout << "Nhap giay: ";
    is >> tg.giay;
    while (tg.giay < 0 || tg.giay >= 60) {
        cout << "Giay khong hop le. Vui long nhap lai: ";
        cin >> tg.giay;
    }
    return is;
}

ostream& operator<<(ostream& os, ThoiGian tg){
    os << tg.gio << " gio " << tg.phut << " phut " << tg.giay << " giay" << endl;
    return os;
}

ThoiGian operator+(ThoiGian tg, int s){
    ThoiGian kq;
    int totalGiay1 = tg.gio * 3600 + tg.phut * 60 + tg.giay;
    int totalGiayKQ = totalGiay1 + s;

    kq.gio = totalGiayKQ / 3600;
    kq.phut = (totalGiayKQ % 3600) / 60;
    kq.giay = totalGiayKQ % 60;

    return kq;
}

ThoiGian operator-(ThoiGian tg, int s){
    ThoiGian kq;
    int totalGiay1 = tg.gio * 3600 + tg.phut * 60 + tg.giay;
    int totalGiayKQ = totalGiay1 - s;

    kq.gio = totalGiayKQ / 3600;
    kq.phut = (totalGiayKQ % 3600) / 60;
    kq.giay = totalGiayKQ % 60;

    return kq;
}

ThoiGian operator++(ThoiGian& tg){
    ThoiGian kq;
    int totalGiay = tg.gio * 3600 + tg.phut * 60 + tg.giay + 1;

    kq.gio = totalGiay / 3600;
    kq.phut = (totalGiay % 3600) / 60;
    kq.giay = totalGiay % 60;

    return kq;
}

ThoiGian operator--(ThoiGian& tg){
    ThoiGian kq;
    int totalGiay = tg.gio * 3600 + tg.phut * 60 + tg.giay - 1;

    kq.gio = totalGiay / 3600;
    kq.phut = (totalGiay % 3600) / 60;
    kq.giay = totalGiay % 60;

    return kq;
}

// Destructor
ThoiGian::~ThoiGian(){}
