#include <iostream>
#include <cmath>
#include "TamGiac.h"

using namespace std;

// Constructor
//TamGiac(Point a = (0,0), Point b = (0,0), Point c = (0,0));

// Ham get, set


// Ham chuc nang
void TamGiac::Nhap(){
    cout << "Nhap diem A: \n";
    A.Nhap();
    cout << "\nNhap diem B: \n";
    B.Nhap();
    cout << "\nNhap diem C: \n";
    C.Nhap();
}

void TamGiac::Xuat(){
    cout << "[A]  ";
    A.Xuat();
    cout << "[B]  ";
    B.Xuat();
    cout << "[C]  ";
    C.Xuat();
}

void TamGiac::kiemtraLoaiTamGiac() {
    double AB = A.KhoangCach(B); // Thường là cạnh c
    double AC = B.KhoangCach(C); // Thường là cạnh a
    double BC = A.KhoangCach(C); // Thường là cạnh b
    
    // 1e-9 là một lựa chọn tốt cho 'double'.
    const double EPSILON = 1e-9; 

    // --- Bước 1: Kiểm tra tính hợp lệ của tam giác ---
    // (a + b > c) -> (a + b - c > 0)
    // Nếu (a + b - c <= EPSILON) -> tam giác suy biến (không hợp lệ)
    if ((AB + AC <= BC + EPSILON) || 
        (AB + BC <= AC + EPSILON) || 
        (AC + BC <= AB + EPSILON)) 
    {
        // SỬA 3: Sửa lỗi chính tả
        cout << "Error. Not found triangle." << endl;
        return; 
    }

    // --- Bước 2: Kiểm tra các tính chất (Cân, Vuông) ---
    bool isCan = (fabs(AB - AC) < EPSILON) || 
                 (fabs(AB - BC) < EPSILON) || 
                 (fabs(AC - BC) < EPSILON);

    bool isVuong = (fabs(AB*AB + AC*AC - BC*BC) < EPSILON) || 
                   (fabs(AB*AB + BC*BC - AC*AC) < EPSILON) || 
                   (fabs(AC*AC + BC*BC - AB*AB) < EPSILON);

    // --- Bước 3: Phân loại tam giác ---
    cout << "Tam giac la: ";

    if (isVuong && isCan) {
        cout << "Tam giac VUONG CAN." << endl;
    } 
    else if (isVuong) {
        cout << "Tam giac VUONG." << endl;
    } 
    else if (isCan) {
        // Kiểm tra trường hợp đặc biệt là tam giác ĐỀU
        if (fabs(AB - AC) < EPSILON && fabs(AB - BC) < EPSILON) {
            cout << "Tam giac DEU." << endl;
        } else {
            cout << "Tam giac CAN." << endl;
        }
    } 
    else {
        cout << "Tam giac THUONG." << endl;
    }
}

double TamGiac::tinhChuVi(){
    return A.KhoangCach(B) + A.KhoangCach(C) + B.KhoangCach(C);
}

double TamGiac::tinhDienTich(){
    float AB = A.KhoangCach(B);  // a
    float AC = A.KhoangCach(C);  // c
    float BC = B.KhoangCach(C);  // b
    float p = (AB + AC + BC)/2;  // Nua chu vi

    return sqrt(p * (p - AB) * (p - BC) * (p - AC));
}

void TamGiac::tinhTienTG(Point v){
    A = A.tinhTien(v);
    B = B.tinhTien(v);
    C = C.tinhTien(v);
}

Point TamGiac::TrongTam(){
    Point center;
    center.setX((A.getX() + B.getX() + C.getX()) / 3.0);
    center.setY((A.getY() + B.getY() + C.getY()) / 3.0);
    return center;
}

void TamGiac::PhongTo_ThuNho(float factor){
    Point tt = this->TrongTam();
    
    A = this->A.PhongTo_ThuNho(tt, factor);
    B = this->B.PhongTo_ThuNho(tt, factor);
    C = this->C.PhongTo_ThuNho(tt, factor);
}


// Destructor
TamGiac::~TamGiac(){}