// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "Point.h"
using namespace std;

class Point{
	private:
		int x;
		int y;
	public:
		// Constructor
		Point(int x = 0, int y = 0);

		// Ham get, set
		int getX();
		int getY();
		void setX(int);	
		void setY(int);

		// Ham chuc nang
		void Nhap();
		void Xuat();
		Point tinhTien(Point p);
		
		// Destructor
		~Point();

};

// Constructor
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}


// Ham get, set
int Point::getX(){
	return x;
}

int Point::getY(){
	return y;
}

void Point::setX(int x){
	this->x = x;
}

void Point::setY(int y){
	this->y = y;
}


// Ham chuc nang
void Point::Nhap(){
	cout << "Nhap Hoanh do: ";
	cin >> x;
	cout << "Nhap Tung do: ";
	cin >> y;
}

void Point::Xuat(){
	cout << "(" << x << "," << y << ")" << endl;
}

Point Point::tinhTien(Point p){
	Point kq;
	kq.x = x + p.x;
	kq.y = y + p.y;
	
	return kq;
}

// Destructor
Point::~Point(){}


int main(){
	Point a, b, p, tt;

	cout << "=======NHAP 2 DIEM A & B=======\n";
	a.Nhap();
	b.Nhap();

	cout << "\n=======XUAT 2 DIEM A & B=======\n";
	a.Xuat();
	b.Xuat();
	
	int choose, i_x, i_y;
	do{
		cout << "\n==========BANG THONG TIN============\n";
		cout << "1. Thay doi gia tri diem A\n";
		cout << "2. Thay doi gia tri diem B\n";
		cout << "3. Tinh tien diem A\n";
		cout << "4. Tinh tien diem B\n";
		cout << "5. Xuat ra diem A, B\n";
		cout << "6. Ket thuc\n";
		cout << "Nhap lua chon: ";
		cin >> choose;

		if (choose != 1 && choose != 2 && choose != 3 && choose != 4 && choose != 5 && choose != 6){
			cout << "\nBan da nhap sai lua chon....\n";
			cout << "Chuong trinh ket thuc!!\n";
			break;
		}
		
		switch (choose){
			case 1:
				cout << "Nhap gia tri x thay doi: ";
				cin >> i_x;
				cout << "Nhap gia tri y thay doi: ";
				cin >> i_y;
				a.setX(i_x);
				a.setY(i_y);
				cout << "\nDiem A sau khi thay doi: ";
				a.Xuat();
				break;
			case 2:
				cout << "Nhap gia tri x thay doi: ";
				cin >> i_x;
				cout << "Nhap gia tri y thay doi: ";
				cin >> i_y;
				b.setX(i_x);
				b.setY(i_y);
				cout << "\nDiem B sau khi thay doi: ";
				b.Xuat();
				break;
			case 3:
				cout << "Nhap vecto tinh tien: \n";
				p.Nhap();
				tt = a.tinhTien(p);
				cout << "Diem A sau khi tinh tien: \n";
				tt.Xuat();
				break;
			case 4:
				cout << "Nhap vecto tinh tien: \n";
				p.Nhap();
				tt = b.tinhTien(p);
				cout << "Diem B sau khi tinh tien: \n";
				tt.Xuat();
				break;
			case 5:
				cout << "\n=======XUAT 2 DIEM A & B=======\n";
				a.Xuat();
				b.Xuat();
				break;
			default:
				break;	
		}
	} while(choose != 6);

	return 0;
}
