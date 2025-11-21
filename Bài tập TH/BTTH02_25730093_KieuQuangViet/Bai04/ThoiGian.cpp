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
void ThoiGian::nhapThoiGian(){
    cout << "Nhap gio: ";
    cin >> gio;
    while (gio < 0) {
        cout << "Gio khong hop le. Vui long nhap lai: ";
        cin >> gio;
    }

    cout << "Nhap phut: ";
    cin >> phut;
    while (phut < 0 || phut >= 60) {
        cout << "Phut khong hop le. Vui long nhap lai: ";
        cin >> phut;
    }

    cout << "Nhap giay: ";
    cin >> giay;
    while (giay < 0 || giay >= 60) {
        cout << "Giay khong hop le. Vui long nhap lai: ";
        cin >> giay;
    }
}

void ThoiGian::xuatThoiGian(){
    cout << gio << " gio " << phut << " phut " << giay << " giay" << endl;
}

ThoiGian ThoiGian::tangThoiGian(ThoiGian t){
    ThoiGian kq;
    int totalGiay1 = gio * 3600 + phut * 60 + giay;
    int totalGiay2 = t.gio * 3600 + t.phut * 60 + t.giay;
    int totalGiayKQ = totalGiay1 + totalGiay2;

    kq.gio = totalGiayKQ / 3600;
    kq.phut = (totalGiayKQ % 3600) / 60;
    kq.giay = totalGiayKQ % 60;

    return kq;
}

ThoiGian ThoiGian::giamThoiGian(ThoiGian t){
    ThoiGian kq;
    int totalGiay1 = gio * 3600 + phut * 60 + giay;
    int totalGiay2 = t.gio * 3600 + t.phut * 60 + t.giay;
    int totalGiayKQ = totalGiay1 - totalGiay2;
    if (totalGiayKQ < 0) 
        totalGiayKQ = 0;

    kq.gio = totalGiayKQ / 3600;
    kq.phut = (totalGiayKQ % 3600) / 60;
    kq.giay = totalGiayKQ % 60;

    return kq;
}

// Destructor
ThoiGian::~ThoiGian(){}