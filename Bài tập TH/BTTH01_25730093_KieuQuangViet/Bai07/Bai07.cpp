// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class Ngay{
	private:
		int ngay;
		int thang;
		int nam;
	public:
		void Nhap();
		void Xuat();
		bool kiemTraNamNhuan();
		void NgayKeTiep();
		int ngayToiDaTrongThang();
};

void Ngay::Nhap(){
	cout << "Nhap ngay: ";
	cin >> ngay;
	cout << "Nhap thang: ";
	cin >> thang;
	cout << "Nhap nam: ";
	cin >> nam;
}

void Ngay::Xuat(){
	cout << ngay << "/" << thang << "/" << nam;
}

bool Ngay::kiemTraNamNhuan(){
	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		return true;
	return false;
}

int Ngay::ngayToiDaTrongThang(){
	switch (thang){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
			if (this->kiemTraNamNhuan())
				return 29;
			else
				return 28;
		default:
			return 0;
	}
}

void Ngay::NgayKeTiep(){
	if (nam <= 0 || thang < 1 || thang > 12 || ngay < 1 || ngay > this->ngayToiDaTrongThang()){
		cout << "Ngay thang nam khong hop le !!!\n";
		return;
	}
	ngay++;

	if (ngay > this->ngayToiDaTrongThang()){
		ngay = 1;
		thang++;
		if (thang > 12){
			thang = 1;
			nam++;
		}
	}
	cout << "\nNgay ke tiep la: " << ngay << "/" << thang << "/" << nam << endl;
}

int main(){

	Ngay n;
	
	n.Nhap();

	cout << endl;
	n.Xuat();

	n.NgayKeTiep();

	return 0;
}
