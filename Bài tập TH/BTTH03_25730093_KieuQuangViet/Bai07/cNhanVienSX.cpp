#include <iostream>
#include <string>
#include "cNhanVienSX.h"
using namespace std;

// Constructor
cNhanVienSX::cNhanVienSX(string manv, string hoten, string ngaysinh, int sosp, long dongia){
    this->MaNV = manv;
    this->HoTen = hoten;
    this->NgaySinh = ngaysinh;
    this->SoSP = sosp;
    this->DonGia = dongia;
}

// Ham get, set
string cNhanVienSX::getMaNV(){
    return MaNV;
}
string cNhanVienSX::getHoTen(){
    return HoTen;
}
string cNhanVienSX::getNgaySinh(){
    return NgaySinh;
}
int cNhanVienSX::getSoSP(){
    return SoSP;
}
long cNhanVienSX::getDonGia(){
    return DonGia;
}
void cNhanVienSX::setMaNV(string manv){
    this->MaNV = manv;
}
void cNhanVienSX::setHoTen(string hoten){
    this->HoTen = hoten;
}
void cNhanVienSX::setNgaySinh(string ngaysinh){
    this->NgaySinh = ngaysinh;
}
void cNhanVienSX::setSoSP(int sosp){
    this->SoSP = sosp;
}
void cNhanVienSX::setDonGia(long dongia){
    this->DonGia = dongia;
}

int cNhanVienSX::getTuoi(){
    return stoi(this->NgaySinh.substr(NgaySinh.length() - 4));
}
long cNhanVienSX::getLuong(){
    return SoSP * DonGia;
}
void cNhanVienSX::setLuong(long luong){
    this->Luong = this->getLuong(); 
}

// Ham chuc nang
void cNhanVienSX::Nhap(){
    cin.ignore();
    cout << "Nhap ma nhan vien: ";
    getline(cin, MaNV);

    cout << "Nhap Ho va Ten: ";
    getline(cin, HoTen);

    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, NgaySinh);

    cout << "Nhap so san pham (cai): ";
    cin >> SoSP;
    
    cout << "Nhap don gia san pham ($): ";
    cin >> DonGia;
}

void cNhanVienSX::Xuat(){
    cout << "[MANHANVIEN]  ";
    cout << MaNV << endl;

    cout << "[HOTEN]       ";
    cout << HoTen << endl;

    cout << "[NGAYSINH]    ";
    cout << NgaySinh << endl;

    cout << "[SOSP]        ";
    cout << SoSP << endl;

    cout << "[GIASP]       ";
    cout << DonGia << endl;

    this->setLuong(SoSP*DonGia);
    cout << "[LUONG]       ";
    cout << Luong << endl;
}

// Destructor
cNhanVienSX::~cNhanVienSX(){}