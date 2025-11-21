#include <iostream>
#include "cDSNhanVienVP.h"

// Constructor

// Ham get, set
int cDSNhanVienVP::getSL(){
    return sl;
}
void cDSNhanVienVP::setSL(int sl){
    this->sl = sl;
}

// Ham chuc nang
void cDSNhanVienVP::Nhap(){
    cout << "Nhap so luong: ";
    cin >> sl;
    for (int i = 0; i < sl; i++){
        cout << "\nNhap nhan vien thu " << i << endl;
        NVVP[i].Nhap();
    }
}
void cDSNhanVienVP::Xuat(){
    for (int i = 0; i < sl; i++){
        cout << "\nNHAN VIEN THU " << i << endl;
        NVVP[i].Xuat();
    }
}

void cDSNhanVienVP::nvLuongCaoNhat(){
    float luong_max = NVVP[0].getLuong();
    for (int i = 1; i < sl; i++)
        if (NVVP[i].getLuong() > luong_max)
            luong_max = NVVP[i].getLuong();
    
    for (int i = 0; i < sl; i++)
        if (NVVP[i].getLuong() == luong_max){
            cout << "Nhan vien thu " << i << endl;
            NVVP[i].Xuat();
        }
}

float cDSNhanVienVP::tongLuong(){
    float tong = 0;
    for (int i = 0; i < sl; i++)
        tong += NVVP[i].getLuong();
    return tong;
}

void cDSNhanVienVP::nvTuoiCaoNhat(){
    int tuoiMax = NVVP[0].getTuoi();
    for (int i = 1; i < sl; i++)
        if (NVVP[i].getTuoi() < tuoiMax)
            tuoiMax = NVVP[i].getTuoi();
    
    for (int i = 0; i < sl; i++)
        if (NVVP[i].getTuoi() == tuoiMax){
            cout << "Nhan vien thu " << i << endl;
            NVVP[i].Xuat();
        }

}

void swap (cNhanVienVP &a, cNhanVienVP &b){
    cNhanVienVP tmp = a;
    a = b;
    b = tmp;
}

void cDSNhanVienVP::sxNhanVien_TangDanTheoLuong(){
    for (int i = 0; i < sl-1; i++)
        for (int j = i+1; j < sl; j++)
            if (NVVP[i]. getLuong() > NVVP[j].getLuong())
                swap(NVVP[i], NVVP[j]);
}

// Destructor
cDSNhanVienVP::~cDSNhanVienVP(){}