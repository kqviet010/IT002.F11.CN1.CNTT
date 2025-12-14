// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
using namespace std;

class SoPhuc{
    private:
        float PhanThuc;
        float PhanAo;
    public:
        // Constructor
        SoPhuc(float = 0, float = 0);

        // Ham get, set
        float getPhanThuc();
        float getPhanAo();
        void setPhanThuc(float);
        void setPhanAo(float);

        // Ham chuc nang
        friend istream& operator>>(istream& is, SoPhuc& sp);
        friend ostream& operator<<(ostream& os, SoPhuc sp);

        friend SoPhuc operator+(SoPhuc a, SoPhuc b);
        friend SoPhuc operator-(SoPhuc a, SoPhuc b);
        friend SoPhuc operator*(SoPhuc a, SoPhuc b);
        friend SoPhuc operator/(SoPhuc a, SoPhuc b);

        friend bool operator==(SoPhuc a, SoPhuc b);
        friend bool operator!=(SoPhuc a, SoPhuc b);

        // Destructor
        ~SoPhuc();
};
