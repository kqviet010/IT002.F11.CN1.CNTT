// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include "cPhanSo.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor
cPhanSo::cPhanSo(){}

cPhanSo::cPhanSo(int t){
	this->iTuSo = t;
	this->iMauSo = 1;
}

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

float cPhanSo::getGiaTri(){
	return 1.0*iTuSo/iMauSo;
}

// Ham chuc nang
istream& operator>>(istream& is, cPhanSo& ps){
	cout << "Nhap Tu So: ";
	is >> ps.iTuSo;

	cout << "Nhap Mau So: ";
	is >> ps.iMauSo;

	return is;
}

ostream& operator<<(ostream& os, cPhanSo ps){
	os << ps.iTuSo << "/" << ps.iMauSo;
	return os;
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

cPhanSo cPhanSo::operator+(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo + this->iMauSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();

	return kq;
}

cPhanSo cPhanSo::operator-(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo - this->iMauSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();
	
	return kq;
}

cPhanSo cPhanSo::operator*(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iTuSo;
	kq.iMauSo = this->iMauSo * p.iMauSo;
	kq.rutGon();
	
	return kq;
}

cPhanSo cPhanSo::operator/(cPhanSo p){
	cPhanSo kq;
	kq.iTuSo = this->iTuSo * p.iMauSo;
	kq.iMauSo = this->iMauSo * p.iTuSo;
	kq.rutGon();
	
	return kq;
}

bool cPhanSo::operator==(cPhanSo p){
	return (this->getGiaTri() == p.getGiaTri());
}

bool cPhanSo::operator>(cPhanSo p){
	return (this->getGiaTri() > p.getGiaTri());
}

bool cPhanSo::operator<(cPhanSo p){
	return (this->getGiaTri() < p.getGiaTri());
}

// Destructor
cPhanSo::~cPhanSo(){}
