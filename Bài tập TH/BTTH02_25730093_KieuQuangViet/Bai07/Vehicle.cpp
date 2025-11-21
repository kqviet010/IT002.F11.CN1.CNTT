#include <iostream>
#include <string>
#include "Vehicle.h"
using namespace std;

// Constructor
Vehicle::Vehicle(string chuxe, string loaiso, long tg, int dt){
    ChuXe = chuxe;
    LoaiXe = loaiso;
    TriGia = tg;
    DungTich = dt;
}

// Ham get, set
string Vehicle::getChuXe(){
    return ChuXe;
}

string Vehicle::getLoaiXe(){
    return LoaiXe;
}

long Vehicle::getTriGia(){
    return TriGia;
}

int Vehicle::getDungTich(){
    return DungTich;
}

void Vehicle::setChuXe(string chuxe){
    ChuXe = chuxe;
}

void Vehicle::setLoaiXe(string loaixe){
    LoaiXe = loaixe;
}

void Vehicle::setTriGia(long tg){
    TriGia = tg;
}

void Vehicle::setDungTich(int dt){
    DungTich = dt;
}

// Ham chuc nang
void Vehicle::Nhap(){
    cout << "Nhap chu xe: ";
    getline(cin, ChuXe);
    cout << "Nhap loai xe: ";
    getline(cin, LoaiXe);
    cout << "Nhap tri gia: ";
    cin >> TriGia;
    cout << "Nhap dung tich: ";
    cin >> DungTich;
}

void Vehicle::Xuat(){
    cout << "Chu xe: ";
    cout << ChuXe << endl;
    cout << "Loai xe: ";
    cout << LoaiXe << endl;
    cout << "Tri gia: ";
    cout << TriGia << endl;
    cout << "Dung tich: ";
    cout << DungTich << endl;
}

double Vehicle::tinhThue(){
    double triSo;
    if (DungTich < 100 || DungTich > 100 && DungTich < 200){
        if (DungTich < 100)
            triSo = 0.01;
        else
            triSo = 0.03;
    }
    else
        triSo = 0.05;
    return triSo * TriGia;
}

// Destructor
Vehicle::~Vehicle(){}


