// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class cPhanSo{
	private:
		int iTuSo;
		int iMauSo;
	public:
		// Constructor
		cPhanSo();
		cPhanSo(int);
		cPhanSo(int, int);
		
		// Ham get, set
		int getTuSo();
		int getMauSo();
		void setTuSo(int);
		void setMauSo(int);
		float getGiaTri();

		// Ham chuc nang
		void Nhap();
		void rutGon();
		friend istream& operator>>(istream& is, cPhanSo& ps);
		friend ostream& operator<<(ostream& os, cPhanSo ps);

		cPhanSo operator+(cPhanSo p);	
		cPhanSo operator-(cPhanSo p);
		cPhanSo operator*(cPhanSo p);
		cPhanSo operator/(cPhanSo p);
		bool operator==(cPhanSo p);
		bool operator>(cPhanSo p);
		bool operator<(cPhanSo p);

		// Destructor
		~cPhanSo();
};
