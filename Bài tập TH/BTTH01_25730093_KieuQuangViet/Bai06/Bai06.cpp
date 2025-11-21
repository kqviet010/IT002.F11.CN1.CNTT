// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class HocSinh{
	private:
		char HoTen[100];
		float DiemToan;
		float DiemVan;
	public:
		void Nhap();
		void Xuat();
		float DiemTB();
};

class DSHocSinh{
	private:
		HocSinh HS[100];
		int sl;
	public:
		void Nhap();
		void Xuat();
		void TimHSDiemCaoNhat();
		void TimHSDiemThapNhat();
};

void HocSinh::Nhap(){
	cout << "Nhap Ho va Ten: ";
	cin.getline(HoTen, 100);
	cout << "Nhap diem Toan: ";
	cin >> DiemToan;
	cout << "Nhap diem Van: ";
	cin >> DiemVan;
}

void HocSinh::Xuat(){
	cout << "Ho va Ten: " << HoTen << endl;
	cout << "Diem Toan: " << DiemToan << endl;
	cout << "Diem Van: " << DiemVan << endl;
}

float HocSinh::DiemTB(){
	return (DiemToan + DiemVan) / 2;
}

void DSHocSinh::Nhap(){
	cout << "NHAP DANH SACH HOC SINH: \n";
	cout << "Nhap so luong Hoc sinh: ";
	cin >> sl;
	for (int i = 0; i < sl; i++){
		cout << "\nNhap Hoc Sinh thu " << i << endl;
		cin.ignore();
		HS[i].Nhap();
	}
}

void DSHocSinh::Xuat(){
	cout << "\nXUAT DANH SACH HOC SINH: \n";
	for (int i = 0; i < sl; i++){
		cout << "Hoc Sinh thu " << i << endl;
		HS[i].Xuat();
		cout << endl;
	}
}

void DSHocSinh::TimHSDiemCaoNhat(){
	float max = HS[0].DiemTB();
	for (int i = 1; i < sl; i++)
		if (HS[i].DiemTB() > max)
			max = HS[i].DiemTB();

	for (int i = 0; i < sl; i++)
		if (HS[i].DiemTB() == max)
			HS[i].Xuat();
}

void DSHocSinh::TimHSDiemThapNhat(){
	float min = HS[0].DiemTB();
	for (int i = 1; i < sl; i++)
		if (HS[i].DiemTB() < min)
			min = HS[i].DiemTB();

	for (int i = 0; i < sl; i++)
		if (HS[i].DiemTB() == min)
			HS[i].Xuat();
}

int main(){
	DSHocSinh ds;

	ds.Nhap();
	ds.Xuat();

	cout << "\nHOC SINH CO DIEM TB CAO NHAT\n";
	ds.TimHSDiemCaoNhat();

	cout << "\nHOC SINH CO DIEM TB THAP NHAT\n";
	ds.TimHSDiemThapNhat();

	return 0;
}
