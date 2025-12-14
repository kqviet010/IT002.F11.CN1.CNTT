// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cmath>
#include "DaThuc.h"
using namespace std;

// Constructor


// Ham get, set
int DaThuc::getBac(){
    return bac;
}
void DaThuc::setBac(int bac){
    this->bac = bac;
}

// Ham chuc nang
istream& operator>>(istream& is, DaThuc& dt){
    cout << "Nhap bac cua da thuc: ";
    is >> dt.bac;
    for (int i = 0; i < dt.bac+1; i++){
        cout << "["<< i <<"]: ";
        cin >> dt.HeSo[i];
    }
    return is;
}

ostream& operator<<(ostream& os, const DaThuc dt){
    for (int i = 0; i < dt.bac+1; i++){
        if (i == 0)
            os << dt.HeSo[i] << " + ";
        else if (i == dt.bac)
            os << dt.HeSo[i] << "x^" << i;
        else
            os << dt.HeSo[i] << "x^" << i << " + ";
    }
    return os;
}

DaThuc operator+(DaThuc dt1, DaThuc dt2) {
    DaThuc kq;
    
    // TRƯỜNG HỢP 1: dt2 có bậc lớn hơn dt1
    if (dt1.bac < dt2.bac) {
        kq.setBac(dt2.bac);
        for (int i = 0; i <= dt1.bac; i++)
            kq.HeSo[i] = dt1.HeSo[i] + dt2.HeSo[i];
        for (int i = dt1.bac + 1; i <= dt2.bac; i++)
            kq.HeSo[i] = dt2.HeSo[i];
    } 
    // TRƯỜNG HỢP 2: dt1 có bậc lớn hơn hoặc bằng dt2
    else {
        kq.setBac(dt1.bac); 
        for (int i = 0; i <= dt2.bac; i++)
            kq.HeSo[i] = dt1.HeSo[i] + dt2.HeSo[i];
        for (int i = dt2.bac + 1; i <= dt1.bac; i++) 
            kq.HeSo[i] = dt1.HeSo[i];
    }
    return kq;
}

DaThuc operator-(DaThuc dt1, DaThuc dt2) {
    DaThuc kq;
    
    // TRƯỜNG HỢP 1: dt2 có bậc lớn hơn dt1
    if (dt1.bac < dt2.bac) {
        kq.setBac(dt2.bac); 
        for (int i = 0; i <= dt1.bac; i++)
            kq.HeSo[i] = dt1.HeSo[i] - dt2.HeSo[i];  
        for (int i = dt1.bac + 1; i <= dt2.bac; i++)
            kq.HeSo[i] = -dt2.HeSo[i];
    } 
    // TRƯỜNG HỢP 2: dt1 có bậc lớn hơn hoặc bằng dt2
    else {
        kq.setBac(dt1.bac); 
        for (int i = 0; i <= dt2.bac; i++)
            kq.HeSo[i] = dt1.HeSo[i] - dt2.HeSo[i];  
        for (int i = dt2.bac + 1; i <= dt1.bac; i++) 
            kq.HeSo[i] = dt1.HeSo[i];
    }
    return kq;
}

float DaThuc::tinhDaThuc(float x){
    float kq = HeSo[0];
    for (int i = 1; i <= bac; i++)
        kq += HeSo[i] * pow(x, i);

    return kq;
}

// Destructor
DaThuc::~DaThuc(){}