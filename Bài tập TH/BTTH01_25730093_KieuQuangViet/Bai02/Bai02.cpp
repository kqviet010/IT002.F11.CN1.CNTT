// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

struct PhanSo {
	int iTuSo, iMauSo;
};

void Nhap(PhanSo &p){
	cout << "Nhap Tu so: ";
	cin >> p.iTuSo;
	cout << "Nhap Mau so: ";
	cin >> p.iMauSo;
	while (p.iMauSo == 0) {
		cout << "Loi Mau so bang 0. Vui long nhap lai...\n";
		cout << "Nhap Mau so: ";
		cin >> p.iMauSo;
	};
}

void Xuat(PhanSo p){
	cout << p.iTuSo << "/" << p.iMauSo << endl;
}

int timUCLN(int a, int b){
	a = abs(a);
	b = abs(b);

	while (b != 0){
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

void rutGon(PhanSo &p){
	int ucln = timUCLN(p.iTuSo, p.iMauSo);
	p.iTuSo = p.iTuSo / ucln;
	p.iMauSo = p.iMauSo / ucln;

	if (p.iMauSo < 0){
		p.iTuSo = -p.iTuSo;
		p.iMauSo = -p.iMauSo;
	}
}

void soSanh_2_PhanSo(PhanSo p, PhanSo q){
	cout << "Phan so lon nhat la: ";
	if (p.iTuSo * q.iMauSo > q.iTuSo * p.iMauSo)
		Xuat(p);
	else
		Xuat(q);
}

int main(){
	PhanSo p, q;
	
	cout << "Nhap Phan so p:\n";
	Nhap(p);
	
	cout << "\nNhap Phan so q:\n";
	Nhap(q);
	rutGon(p);
	rutGon(q);
	
	cout << endl;
	soSanh_2_PhanSo(p, q);

	return 0;
}
