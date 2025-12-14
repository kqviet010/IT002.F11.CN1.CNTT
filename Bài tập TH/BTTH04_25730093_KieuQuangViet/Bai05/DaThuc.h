// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class DaThuc{
    private:
        float HeSo[100];
        int bac;
    public:
        // Constructor
        

        // Ham get, set
        int getBac();
        void setBac(int);

        // Ham chuc nang
        friend istream& operator>>(istream& is, DaThuc& dt);
        friend ostream& operator<<(ostream& os, const DaThuc dt);
        friend DaThuc operator+(DaThuc dt1, DaThuc dt2);
        friend DaThuc operator-(DaThuc dt1, DaThuc dt2);
        void Nhap();
        void Xuat();
        DaThuc Cong(DaThuc);
        DaThuc Tru(DaThuc);
        float tinhDaThuc(float);

        // Destructor
        ~DaThuc();
};