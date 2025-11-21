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
		void XuatRaThu();
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

void Ngay::XuatRaThu(){
	if (nam <= 0 || thang < 1 || thang > 12 || ngay < 1 || ngay > this->ngayToiDaTrongThang()){
		cout << "Ngay thang nam khong hop le !!!\n";
		return;
	}

	static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
	const char* tenThu[] = {"Chu Nhat", "Thu Hai", "Thu Ba", "Thu Tu", "Thu Nam", "Thu Sau", "Thu Bay"};

	if (thang < 3)
		nam--;
	int ketQua = (nam + nam/4 - nam/100 + nam/400 + t[thang-1] + ngay) % 7;
	cout << "\nHom nay la: " << tenThu[ketQua] << endl;
}

int main(){

	Ngay n;
	
	n.Nhap();

	cout << endl;
	n.Xuat();
	n.XuatRaThu();

	return 0;
}
