// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include "cPhanSo.h"
#include <iostream>
using namespace std;

int main(){
	cPhanSo p, q, kq;
	cout << "Nhap 2 phan so p & q\n";
	p.Nhap();
	q.Nhap();

	cout << "\nXuat 2 phan so p & q\n";
	p.Xuat();
	q.Xuat();
	
	cout << "======== TINH TONG P + Q =======\n";
	kq = p.Cong(q);
	kq.Xuat();

	cout << "======== TINH HIEU P - Q =======\n";
	kq = p.Tru(q);
	kq.Xuat();

	cout << "======== TINH TICH P * Q =======\n";
	kq = p.Nhan(q);
	kq.Xuat();

	cout << "======== TINH THUONG P / Q =======\n";
	kq = p.Chia(q);
	kq.Xuat();

	return 0;
}
