// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <vector>
#include <iostream>
using namespace std;
class cMatrix;

class cVector {
private:
    vector<float> data;   
    int n;
public:
    // Constructor
    cVector(int size = 0);

    // Getter
    float getSize();
    float operator[](int i) const; // Đọc
    float& operator[](int i);      // Ghi

    // Input/Output
    friend istream& operator>>(istream& is, cVector& v);
    friend ostream& operator<<(ostream& os, cVector v);

    //// Cac phep toan
    // Vector + Vector
    friend cVector operator+(const cVector& v1, const cVector& v2);
    
    // Vector - Vector
    friend cVector operator-(const cVector& v1, const cVector& v2);
    
    // Vector * Số thực (k)
    friend cVector operator*(const cVector& v, double k);
    friend cVector operator*(double k, const cVector& v); // Cho phép viết 2 * v
    
    // Vector * Vector (Tích vô hướng)
    friend long operator*(const cVector& v1, const cVector& v2);

    // Vector / Số thực
    friend cVector operator/(const cVector& v, double k);

    // Khai báo friend phép nhân (Ma trận * Vector)
    friend cVector operator*(const cMatrix& m, const cVector& v);
};
