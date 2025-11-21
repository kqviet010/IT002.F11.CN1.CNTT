#include <iostream>
#include "cDSPhanSo.h"
using namespace std;

// Ham chuc nang
void cDSPhanSo::Nhap(){
    cout << "Nhap sl: ";
    cin >> sl;
    for (int i = 0; i < sl; i++){
        cout << "\nNhap phan so thu " << i+1 << endl;
        arr[i].Nhap();
    }
}

void cDSPhanSo::Xuat(){
    for (int i = 0; i < sl; i++){
        cout << "[" << i << "]   ";
        arr[i].Xuat();
    }
}

cPhanSo cDSPhanSo::tinhTong(){
    cPhanSo kq = arr[0];
    for (int i = 1; i < sl; i++)
        kq = kq.Cong(arr[i]);
    
    kq.rutGon();
    return kq;
}

cPhanSo cDSPhanSo::timMin(){
    cPhanSo _min = arr[0];
    for (int i = 1; i < sl; i++)
        if (_min.getValue() > arr[i].getValue())
            _min = arr[i];
    return _min;  
}

cPhanSo cDSPhanSo::timMax(){
    cPhanSo _max = arr[0];
    for (int i = 1; i < sl; i++)
        if (_max.getValue() < arr[i].getValue())
            _max = arr[i];
    return _max;  
}

cPhanSo cDSPhanSo::timTuSNTMax(){
    // Neu Tu so = -1 thi ham ko co Phan so nao co Tu so la So Nguyen To
    cPhanSo kq(-1, 1);
    for (int i = 0; i < sl; i++)
        if (arr[i].checkTuSolaSNT() == true && arr[i].getTuSo() > kq.getTuSo())
            kq = arr[i];
    return kq;
}

// Ham swap
void swap(cPhanSo &a, cPhanSo &b){
    cPhanSo tmp = a;
    a = b;
    b= tmp;
}

void cDSPhanSo::sxTang(){
    for (int i = 0; i < sl; i++)
        for (int j = i+1; j < sl; j++)
            if (arr[i].getValue() > arr[j].getValue())
                swap(arr[i], arr[j]);
}

void cDSPhanSo::sxGiam(){
    for (int i = 0; i < sl; i++)
        for (int j = i+1; j < sl; j++)
            if (arr[i].getValue() < arr[j].getValue())
                swap(arr[i], arr[j]);
}

// Destructor
cDSPhanSo::~cDSPhanSo(){}