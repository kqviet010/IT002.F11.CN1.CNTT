// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

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
istream& operator>>(istream& is, SoPhuc& sp){
    cout << "Nhap phan thuc: ";
    is >> sp.PhanThuc;

    cout << "Nhap phan ao: ";
    is >> sp.PhanAo;

    return is;
}

ostream& operator<<(ostream& os, SoPhuc sp){
    if (sp.PhanAo >= 0){
        if (sp.PhanAo == 1)
            os << sp.PhanThuc << " + i" << endl;
        else
            os << sp.PhanThuc << " + " << sp.PhanAo << "i" << endl;
    }
    else{
        if (sp.PhanAo == -1)
            os << sp.PhanThuc << " - i" << endl;
        else
            os << sp.PhanThuc << " + " << -sp.PhanAo << "i" << endl;
    }
    return os;
}

SoPhuc operator+(SoPhuc a, SoPhuc b){
    SoPhuc kq;
    kq.PhanThuc = a.PhanThuc + b.PhanThuc;
    kq.PhanAo = a.PhanAo + b.PhanAo;
    return kq;
}

SoPhuc operator-(SoPhuc a, SoPhuc b){
    SoPhuc kq;
    kq.PhanThuc = a.PhanThuc - b.PhanThuc;
    kq.PhanAo = a.PhanAo - b.PhanAo;
    return kq;
}

SoPhuc operator*(SoPhuc a, SoPhuc b){
    SoPhuc kq;
    kq.PhanThuc = a.PhanThuc*b.PhanThuc - a.PhanAo*b.PhanAo;
    kq.PhanAo = a.PhanThuc*b.PhanAo + a.PhanAo*b.PhanThuc;
    return kq;
}

SoPhuc operator/(SoPhuc a, SoPhuc b){
    SoPhuc kq;
    kq.PhanThuc = (a.PhanThuc*b.PhanThuc + a.PhanAo*b.PhanAo)/(b.PhanThuc*b.PhanThuc + b.PhanAo*b.PhanAo);
    kq.PhanAo = (b.PhanThuc*a.PhanAo - a.PhanThuc*b.PhanAo)/(b.PhanThuc*b.PhanThuc + b.PhanAo*b.PhanAo);
    return kq;
}

bool operator==(SoPhuc a, SoPhuc b){
    return (a.PhanThuc == b.PhanThuc && a.PhanAo == b.PhanAo);
}

bool operator!=(SoPhuc a, SoPhuc b){
    return (a.PhanThuc != b.PhanThuc || a.PhanAo != b.PhanAo);
}

// Destructor
SoPhuc::~SoPhuc(){}
