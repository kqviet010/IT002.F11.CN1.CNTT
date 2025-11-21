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

void HocSinh::Nhap(){
	cout << "Nhap Ho va Ten: ";
	cin.getline(HoTen, 100);
	cout << "Nhap diem Toan: ";
	cin >> DiemToan;
	cout << "Nhap diem Van: ";
	cin >> DiemVan;
}

void HocSinh::Xuat(){
	cout << "\nHo va Ten: " << HoTen << endl;
	cout << "Diem Toan: " << DiemToan << endl;
	cout << "Diem Van: " << DiemVan << endl;
}

float HocSinh::DiemTB(){
	return (DiemToan + DiemVan) / 2;
}

int main(){
	HocSinh hs;

	hs.Nhap();
	hs.Xuat();
	
	cout << "\nDiem Trung Binh: " << hs.DiemTB() << endl;	

	return 0;
}
