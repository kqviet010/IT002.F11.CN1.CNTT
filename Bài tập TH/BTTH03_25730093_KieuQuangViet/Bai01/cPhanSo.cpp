#include "cPhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

// Ham Kiem tra SNT
bool checkSNT(int n){
    if (n <= 1) {
        return false; 
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Constructor
cPhanSo::cPhanSo(int t, int m){
	this->iTuSo = t;
	this->iMauSo = m;
}

// Ham get, set
int cPhanSo::getTuSo(){
	return iTuSo;
}

int cPhanSo::getMauSo(){
	return iMauSo;
}

void cPhanSo::setTuSo(int t){
	this->iTuSo = t;
}

void cPhanSo::setMauSo(int m){
	this->iMauSo = m;
}
float cPhanSo::getValue(){
	return 1.0*iTuSo/iMauSo;
}

// Ham chuc nang
void cPhanSo::Nhap(){
	cout << "Nhap Tu So: ";
	cin >> iTuSo;
	cout << "Nhap Mau So: ";
	cin >> iMauSo;
}

void cPhanSo::Xuat(){
	this->rutGon();
	cout << iTuSo << "/" << iMauSo << endl;
}

void cPhanSo::rutGon(){
	int a, b, ucln;
	a = abs(iTuSo);
	b = abs(iMauSo);

	while (b != 0){
		int tmp = b;
		b = a % b;
		a = tmp;
	}

	ucln = a;

	iTuSo = iTuSo / ucln;
	iMauSo = iMauSo /ucln;

	if (iMauSo < 0){
		iTuSo = -iTuSo;
		iMauSo = -iMauSo;
	}
}

cPhanSo cPhanSo::Cong(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo + this->iMauSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();

	return kq;
}

cPhanSo cPhanSo::Tru(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo - this->iMauSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();
	
	return kq;
}

cPhanSo cPhanSo::Nhan(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();
	
	return kq;
}

cPhanSo cPhanSo::Chia(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo;
	kq.iMauSo = this->iMauSo * p.iTuSo;
	kq.rutGon();
	
	return kq;
}

bool cPhanSo::checkTuSolaSNT(){
	this->rutGon();
	if (checkSNT(iTuSo))
		return true;
	else
		return false;
}

// Destructor
cPhanSo::~cPhanSo(){}