// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <vector>
#include <iostream>
using namespace std;
class cVector;

class cMatrix {
private:
    vector<vector<float>> data;
    int rows;
    int cols;

public:
    // Constructor
    cMatrix(int r = 0, int c = 0);

    // Getter
    int getRows();
    int getCols();

    // Input/Output
    friend istream& operator>>(istream& is, cMatrix& m);
    friend ostream& operator<<(ostream& os, cMatrix m);

    //// Các phép toán
    // 1. Matrix + Matrix
    friend cMatrix operator+(const cMatrix& m1, const cMatrix& m2);

    // 2. Matrix - Matrix
    friend cMatrix operator-(const cMatrix& m1, const cMatrix& m2);

    // 3. Matrix * Số thực (k)
    friend cMatrix operator*(const cMatrix& m, float k);
    friend cMatrix operator*(double k, const cMatrix& m);

    // 4. Matrix / Số thực
    friend cMatrix operator/(const cMatrix& m, float k);

    // Các phép toán nhan
    friend cMatrix operator*(const cMatrix& m1, const cMatrix& m2);
    friend cVector operator*(const cMatrix& m, const cVector& v);
};
