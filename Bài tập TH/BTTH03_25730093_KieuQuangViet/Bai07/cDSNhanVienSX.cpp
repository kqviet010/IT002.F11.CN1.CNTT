#include <iostream>
#include "cDSNhanVienSX.h"

// Constructor

// Ham get, set
int cDSNhanVienSX::getSL(){
    return sl;
}
void cDSNhanVienSX::setSL(int sl){
    this->sl = sl;
}

// Ham chuc nang
void cDSNhanVienSX::Nhap(){
    cout << "Nhap so luong: ";
    cin >> sl;
    for (int i = 0; i < sl; i++){
        cout << "\nNhap nhan vien thu " << i+1 << ":" << endl;
        NVSX[i].Nhap();
    }
}
void cDSNhanVienSX::Xuat(){
    for (int i = 0; i < sl; i++){
        cout << "\nNHAN VIEN THU " << i+1 << ":"<< endl;
        NVSX[i].Xuat();
    }
}

void cDSNhanVienSX::nvLuongThapNhat(){
    float luong_min = NVSX[0].getLuong();
    for (int i = 1; i < sl; i++)
        if (NVSX[i].getLuong() < luong_min)
            luong_min = NVSX[i].getLuong();
    
    for (int i = 0; i < sl; i++)
        if (NVSX[i].getLuong() == luong_min){
            cout << "Nhan vien thu " << i+1 << endl;
            NVSX[i].Xuat();
        }
}

float cDSNhanVienSX::tongLuong(){
    float tong = 0;
    for (int i = 0; i < sl; i++)
        tong += NVSX[i].getLuong();
    return tong;
}

void cDSNhanVienSX::nvTuoiCaoNhat(){
    int tuoiMax = NVSX[0].getTuoi();
    for (int i = 1; i < sl; i++)
        if (NVSX[i].getTuoi() < tuoiMax)
            tuoiMax = NVSX[i].getTuoi();
    
    for (int i = 0; i < sl; i++)
        if (NVSX[i].getTuoi() == tuoiMax){
            cout << "Nhan vien thu " << i+1 << endl;
            NVSX[i].Xuat();
        }

}

void swap (cNhanVienSX &a, cNhanVienSX &b){
    cNhanVienSX tmp = a;
    a = b;
    b = tmp;
}

void cDSNhanVienSX::sxNhanVien_TangDanTheoLuong(){
    for (int i = 0; i < sl-1; i++)
        for (int j = i+1; j < sl; j++)
            if (NVSX[i].getLuong() > NVSX[j].getLuong())
                swap(NVSX[i], NVSX[j]);
}

// Destructor
cDSNhanVienSX::~cDSNhanVienSX(){}