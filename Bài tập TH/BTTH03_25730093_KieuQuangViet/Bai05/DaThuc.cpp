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
void DaThuc::Nhap(){
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    for (int i = 0; i < bac+1; i++){
        cout << "["<< i <<"]: ";
        cin >> HeSo[i];
    }
}

void DaThuc::Xuat(){
    for (int i = 0; i < bac+1; i++){
        if (i == 0)
            cout << HeSo[i] << " + ";
        else if (i == bac)
            cout << HeSo[i] << "x^" << i;
        else
            cout << HeSo[i] << "x^" << i << " + ";
    }
}
DaThuc DaThuc::Cong(DaThuc dt){
    DaThuc kq;
    int bac_nho;
    if (bac < dt.bac){
        bac_nho = bac;
        kq.setBac(dt.bac);
        for (int i = 0; i <= bac_nho; i++)
            kq.HeSo[i] = this->HeSo[i] + dt.HeSo[i];
        for (int i = bac_nho+1; i <= dt.bac; i++)
            kq.HeSo[i] = dt.HeSo[i];
    }
    else{
        bac_nho = dt.bac;
        kq.setBac(this->bac);
        for (int i = 0; i < bac_nho+1; i++)
            kq.HeSo[i] = this->HeSo[i] + dt.HeSo[i];
        for (int i = bac_nho+1; i <= dt.bac; i++)
            kq.HeSo[i] = this->HeSo[i]; 
    }
    return kq;
}

DaThuc DaThuc::Tru(DaThuc dt){
    DaThuc kq;
    int bac_nho;
    if (bac < dt.bac){
        bac_nho = bac;
        kq.setBac(dt.bac);
        for (int i = 0; i < bac_nho+1; i++)
            kq.HeSo[i] = this->HeSo[i] - dt.HeSo[i];
        for (int i = bac_nho+1; i <= dt.bac; i++)
            kq.HeSo[i] = -dt.HeSo[i]; 
    }
    else{
        bac_nho = dt.bac;
        kq.setBac(this->bac);
        for (int i = 0; i < bac_nho+1; i++)
            kq.HeSo[i] = this->HeSo[i] - dt.HeSo[i];
        for (int i = bac_nho+1; i <= dt.bac; i++)
            kq.HeSo[i] = this->HeSo[i]; 
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