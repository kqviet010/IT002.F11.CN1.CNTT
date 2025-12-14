// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class ThoiGian{
private:
    int gio, phut, giay;
public:
    // Constructor
    ThoiGian(int h=0, int m=0, int s=0);

    // Ham get, set
    int getGio();
    int getPhut();
    int getGiay();
    void setGio(int h);
    void setPhut(int m);
    void setGiay(int s);

    // Ham chuc nang
    friend istream& operator>>(istream& is, ThoiGian& tg);
    friend ostream& operator<<(ostream& os, ThoiGian tg);
    
    friend ThoiGian operator+(ThoiGian tg, int s);
    friend ThoiGian operator-(ThoiGian tg, int s);
    friend ThoiGian operator++(ThoiGian& tg);
    friend ThoiGian operator--(ThoiGian& tg);


    // Destructor
    ~ThoiGian();
};
