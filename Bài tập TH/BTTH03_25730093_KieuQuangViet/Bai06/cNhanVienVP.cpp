#include <iostream>
#include <string>
#include "cNhanVienVP.h"
using namespace std;

// Constructor
cNhanVienVP::cNhanVienVP(string manv, string hoten, string ngaysinh, double luong){
    this->MaNV = manv;
    this->HoTen = hoten;
    this->NgaySinh = ngaysinh;
    this->Luong = luong;
}

// Ham get, set
string cNhanVienVP::getMaNV(){
    return MaNV;
}
string cNhanVienVP::getHoTen(){
    return HoTen;
}
string cNhanVienVP::getNgaySinh(){
    return NgaySinh;
}
double cNhanVienVP::getLuong(){
    return Luong;
}
void cNhanVienVP::setMaNV(string manv){
    this->MaNV = manv;
}
void cNhanVienVP::setHoTen(string hoten){
    this->HoTen = hoten;
}
void cNhanVienVP::setNgaySinh(string ngaysinh){
    this->NgaySinh = ngaysinh;
}
void cNhanVienVP::setLuong(double luong){
    this->Luong = luong;
}

int cNhanVienVP::getTuoi(){
    return stoi(this->NgaySinh.substr(NgaySinh.length() - 4));
}

// Ham chuc nang
void cNhanVienVP::Nhap(){
    cin.ignore();
    cout << "Nhap ma nhan vien: ";
    getline(cin, MaNV);

    cout << "Nhap Ho va Ten: ";
    getline(cin, HoTen);

    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, NgaySinh);

    cout << "Nhap luong ($): ";
    cin >> Luong;
}

void cNhanVienVP::Xuat(){
    cout << "[MANHANVIEN]  ";
    cout << MaNV << endl;

    cout << "[HOTEN]       ";
    cout << HoTen << endl;

    cout << "[NGAYSINH]    ";
    cout << NgaySinh << endl;

    cout << "[LUONG]       ";
    cout << Luong << endl;
}


// Destructor
cNhanVienVP::~cNhanVienVP(){}