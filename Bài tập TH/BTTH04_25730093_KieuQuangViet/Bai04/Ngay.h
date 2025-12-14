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
    // Constructor
    Ngay(int = 0, int = 0, int = 0);

    // Ham get, set
    int getNgay();
    int getThang();
    int getNam();
    void setNgay(int);
    void setThang(int);
    void setNam(int);

    // Ham chuc nang
    friend istream& operator>>(istream& is, Ngay& tg);
    friend ostream& operator<<(ostream& os, const Ngay tg);
    friend Ngay operator+(Ngay tg, int so_ngay);
    friend Ngay operator-(Ngay tg, int so_ngay);
    friend void operator++(Ngay& tg);
    friend void operator--(Ngay& tg);
    void layThu();
    bool ktNamNhuan();
    int soNgayTrongThang();
    bool checkHopLe();

    // Destructor
    ~Ngay();
};
