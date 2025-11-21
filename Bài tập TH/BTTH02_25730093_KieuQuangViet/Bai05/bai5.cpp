// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <string>
#include "Ngay.h"
using namespace std;

int main(){
    Ngay n1;

    cout << "=============NHAP NGAY==============\n";
    n1.Nhap();

    cout << "\n=============XUAT NGAY==============\n";
    n1.Xuat();

    int choose, d, m, y;
	do{
		cout << "\n==========BANG THONG TIN============\n";
		cout << "1. Xuat ra ngay\n";
		cout << "2. Thay doi gia tri ngay\n";
		cout << "3. Ngay hom sau\n";
		cout << "4. Ngay hom truoc\n";
		cout << "5. Kiem tra nam nhuan\n";
        cout << "6. Cho biet thu cua ngay\n";
		cout << "7. Ket thuc\n";
		cout << "Nhap lua chon: ";
		cin >> choose;

		if (choose != 1 && choose != 2 && choose != 3 && choose != 4 && choose != 5 && choose != 6 && choose != 7){
			cout << "\nBan da nhap sai lua chon....\n";
			cout << "Chuong trinh ket thuc!!\n";
			break;
		}
		
		switch (choose){
			case 1: {
                cout << "\n=============XUAT NGAY==============\n";
                n1.Xuat();
                break;
            }
			case 2: {
                cout << "\n=============DAT LAI NGAY, THANG, NAM==============\n";
                cout << "\nNhap lai ngay: ";
                cin >> d;
                n1.setNgay(d);
                cout << "\nNhap lai thang: ";
                cin >> m;
                n1.setThang(m);
                cout << "\nNhap lai nam: ";
                cin >> y;
                n1.setNam(y);
				break;
            }
			case 3: {
                cout << "\n=============XUAT NGAY HOM SAU==============\n";
                n1.tangMotNgay();
                n1.Xuat();
                break;
            }
			case 4: {
                cout << "\n=============XUAT NGAY HOM TRUOC==============\n";
                n1.giamMotNgay();
                n1.Xuat();
				break;
            }
			case 5: {
                cout << "\n=============CO PHAI NAM NHUAN?==============\n";
                if (n1.ktNamNhuan())
                    cout << n1.getNam() << " la nam nhuan!!\n";
                else
                    cout << n1.getNam() << " khong phai la nam nhuan!!\n";
                break;
            }
            case 6: {
                cout << "\n=============THU CUA NGAY==============\n";
                n1.layThu();
                break;
            }
			default:
				break;	
		}
	} while(choose != 7);

    return 0;
}