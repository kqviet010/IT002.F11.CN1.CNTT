#include <iostream>
#include <cmath>
#include "DaGiac.h"

using namespace std;

// Constructor
DaGiac::DaGiac(){}
DaGiac::DaGiac(int dinh){
    this->dinh = dinh;
}

// Ham get, set


// Ham chuc nang
void DaGiac::Nhap(){
    do {
        cout << "Nhap so luong dinh (>= 3): ";
        cin >> dinh;
        if (dinh < 3)
            cout << "So luong dinh phai > 3. Vui long nhap lai...";
    } while (dinh < 3);

    cout << "Nhap toa do cac dinh: \n";
    for (int i = 0; i < dinh; i++){
        cout << "Dinh thu " << i + 1 << ": " << endl;
        point[i].Nhap();
        cout << endl;
    }
}

void DaGiac::Xuat(){
    if (dinh < 3){
        cout << "Da giac ko hop le..";
        return;
    }
    for (int i = 0; i < dinh; i++){
        cout << "[" << i+1 << "]   ";
        point[i].Xuat();
    }
}


double DaGiac::tinhChuVi(){
    double chuvi = 0;
    
    for (int i = 0; i < dinh-1; i++)
        chuvi += point[i].KhoangCach(point[i+1]);
    chuvi += point[dinh-1].KhoangCach(point[0]);
    return chuvi;
}

double DaGiac::tinhDienTich(){
    // Cong thuc Shoelace
    double dientich = 0;

    double sum1 = 0;
    for (int i = 0; i < dinh-1; i++)
        sum1 += point[i].getX() * point[i+1].getY();
    sum1 += point[dinh-1].getX() * point[0].getY();

    double sum2 = 0;
    for (int i = 0; i < dinh-1; i++)
        sum2 += point[i].getY() * point[i+1].getX();
    sum1 += point[dinh-1].getY() * point[0].getX();

    dientich = 0.5 * abs(sum1 - sum2);

    return dientich;
}

void DaGiac::tinhTienDG(Point v){
    for (int i = 0; i < dinh; i++)
        point[i] = point[i].tinhTien(v);
}

void DaGiac::PhongTo_ThuNho(float factor){
    for (int i = 0; i < dinh; i++)
        point[i] = point[i].PhongTo_ThuNho(factor);
}


// Destructor
DaGiac::~DaGiac(){}