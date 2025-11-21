// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

struct PhanSo {
	int iTuSo, iMauSo;
};

struct MangPhanSo {
	PhanSo PS[100];
	int sl;
};
void Nhap(PhanSo &p);
void Xuat(PhanSo p);
void NhapMang(MangPhanSo &arr_ps);
void XuatMang(MangPhanSo arr_ps);
bool soSanh_2_PhanSo(PhanSo p, PhanSo q);
int timUCLN(int a, int b);
void rutGon(PhanSo &p);
void swap(PhanSo &p, PhanSo &q);
void sapXepMangPhanSo_TangDan(MangPhanSo &arr);
void sapXepMangPhanSo_GiamDan(MangPhanSo &arr);

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
	rutGon(p);
}

void Xuat(PhanSo p){
	cout << p.iTuSo << "/" << p.iMauSo << endl;
}

void NhapMang(MangPhanSo &arr_ps){
	cout << "Nhap So luong phan tu mang: ";
	cin >> arr_ps.sl;
	for (int i = 0; i < arr_ps.sl; i++){
		cout << "\nNhap phan so thu " << i << ":\n";
		Nhap(arr_ps.PS[i]);
	}
}

void XuatMang(MangPhanSo arr_ps){
	for (int i = 0; i < arr_ps.sl; i++)
		Xuat(arr_ps.PS[i]);
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

bool soSanh_2_PhanSo(PhanSo p, PhanSo q){
	if (p.iTuSo * q.iMauSo > q.iTuSo * p.iMauSo)
		return true;
	else
		return false;
}

void swap(PhanSo &p, PhanSo &q){
	PhanSo tmp = p;
	p = q;
	q = tmp;
}

void sapXepMangPhanSo_TangDan(MangPhanSo &arr){
	for (int i = 0; i < arr.sl-1; i++)
		for (int j = i+1; j < arr.sl; j++)
			if (soSanh_2_PhanSo(arr.PS[i], arr.PS[j]))
				swap(arr.PS[i], arr.PS[j]);
}

void sapXepMangPhanSo_GiamDan(MangPhanSo &arr){
	for (int i = 0; i < arr.sl-1; i++)
		for (int j = i+1; j < arr.sl; j++)
			if (soSanh_2_PhanSo(arr.PS[i], arr.PS[j]) == false)
				swap(arr.PS[i], arr.PS[j]);
}

int main(){
	MangPhanSo arr_ps;
	
	cout << "Nhap Mang Phan So:\n";
	NhapMang(arr_ps);

	cout << "\nXuat Mang Phan So\n";	
	XuatMang(arr_ps);

	cout << "Mang da duoc Sap Xep Tang Dan:\n";
	sapXepMangPhanSo_TangDan(arr_ps);
	XuatMang(arr_ps);

	cout << "\nMang da duoc Sap Xep Giam Dan:\n";
	sapXepMangPhanSo_GiamDan(arr_ps);
	XuatMang(arr_ps);

	return 0;
}
