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
	cin >> p;
	cout << endl;
	cin >> q;

	cout << "\nXuat 2 phan so p & q\n";
	cout << "[p]  ";
	cout << p;
	cout << endl;
	cout << "[q]  ";
	cout << q;
	
	cout << "\n======== TINH TONG P + Q =======\n";
	kq = p + q;
	cout << kq;

	cout << "\n======== TINH HIEU P - Q =======\n";
	kq = p - q;
	cout << kq;

	cout << "\n======== TINH TICH P * Q =======\n";
	kq = p * q;
	cout << kq;

	cout << "\n======== TINH THUONG P / Q =======\n";
	kq = p / q;
	cout << kq;

	cout << "\n======== SO SANH P & Q =======\n";
	if (p > q){
		cout << "p > q" << endl;
	}
	else{
		if (p == q)
			cout << "p = q" << endl;
		else
			cout << "p < q" << endl;
	}

	return 0;
}
