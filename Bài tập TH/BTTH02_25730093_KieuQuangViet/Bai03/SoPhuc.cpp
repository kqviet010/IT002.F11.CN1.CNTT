#include <iostream>
#include "SoPhuc.h"
using namespace std;

// Constructor
SoPhuc::SoPhuc(float r, float i){
    PhanThuc = r;
    PhanAo = i;
}

// Ham get, set
float SoPhuc::getPhanThuc(){
    return PhanThuc;
}

float SoPhuc::getPhanAo(){
    return PhanAo;
}

void SoPhuc::setPhanThuc(float r){
    PhanThuc = r;
}

void SoPhuc::setPhanAo(float i){
    PhanAo = i;
}

// Ham chuc nang
void SoPhuc::Nhap(){
    cout << "Nhap phan thuc: ";
    cin >> PhanThuc;
    cout << "Nhap phan ao: ";
    cin >> PhanAo;
}

void SoPhuc::Xuat(){
    if (PhanAo >= 0){
        if (PhanAo == 1)
            cout << PhanThuc << " + i" << endl;
        else
            cout << PhanThuc << " + " << PhanAo << "i" << endl;
    }
    else{
        if (PhanAo == -1)
            cout << PhanThuc << " - i" << endl;
        else
            cout << PhanThuc << " + " << -PhanAo << "i" << endl;
    }

}

SoPhuc SoPhuc::Cong(SoPhuc p){
    SoPhuc kq;
    kq.PhanThuc = PhanThuc + p.PhanThuc;
    kq.PhanAo = PhanAo + p.PhanAo;
    return kq;
}

SoPhuc SoPhuc::Tru(SoPhuc p){
    SoPhuc kq;
    kq.PhanThuc = PhanThuc - p.PhanThuc;
    kq.PhanAo = PhanAo - p.PhanAo;
    return kq;
}

SoPhuc SoPhuc::Nhan(SoPhuc p){
    SoPhuc kq;
    kq.PhanThuc = PhanThuc*p.PhanThuc - PhanAo*p.PhanAo;
    kq.PhanAo = PhanThuc*p.PhanAo + PhanAo*p.PhanThuc;
    return kq;
}

SoPhuc SoPhuc::Chia(SoPhuc p){
    SoPhuc kq;
    kq.PhanThuc = (PhanThuc*p.PhanThuc + PhanAo*p.PhanAo)/(p.PhanThuc*p.PhanThuc + p.PhanAo*p.PhanAo);
    kq.PhanAo = (p.PhanThuc*PhanAo - PhanThuc*p.PhanAo)/(p.PhanThuc*p.PhanThuc + p.PhanAo*p.PhanAo);
    return kq;
}

// Destructor
SoPhuc::~SoPhuc(){}
