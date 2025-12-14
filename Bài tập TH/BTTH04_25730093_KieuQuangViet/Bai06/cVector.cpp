// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include "cVector.h"
#include <cstdlib> 
#include <ctime> 
using namespace std;

// Constructor
cVector::cVector(int size){
    n = size;
    data.resize(size); 
    for (int i = 0; i < size; ++i) {
        data[i] = rand() % 10; 
    }
}

// Getter
float cVector::getSize(){
    return n;
}

float cVector::operator[](int i) const {
    return data[i];
}

float& cVector::operator[](int i) {
    return data[i];
}

// Input/Output
istream& operator>>(istream& is, cVector& v) {
    cout << "Nhap so chieu cua vector: ";
    is >> v.n;
    v.data.resize(v.n);
    for (int i = 0; i < v.n; ++i) {
        cout << "v[" << i << "]: ";
        is >> v.data[i];
    }
    return is;
}

ostream& operator<<(ostream& os, cVector v) {
    os << "( ";
    for (int i = 0; i < v.n; ++i) {
        os << v.data[i] << (i < v.n - 1 ? ", " : "");
    }
    os << " )";
    return os;
}

// 1. Cộng hai Vector
cVector operator+(const cVector& v1, const cVector& v2) {
    if (v1.n != v2.n) {
        cout << "Loi: Khong cung kich thuoc de cong vector!" << endl;
        return cVector();
    }
    cVector result(v1.n);
    for (int i = 0; i < v1.n; ++i) 
        result.data[i] = v1.data[i] + v2.data[i];
    return result;
}

// 2. Trừ hai Vector
cVector operator-(const cVector& v1, const cVector& v2) {
    if (v1.n != v2.n) {
        cout << "Loi: Khong cung kich thuoc de tru vector!" << endl;
        return cVector();
    }
    cVector result(v1.n);
    for (int i = 0; i < v1.n; ++i) 
        result.data[i] = v1.data[i] - v2.data[i];
    return result;
}

// 3. Nhân Vector với một số (v * k)
cVector operator*(const cVector& v, double k) {
    cVector result(v.n);
    for (int i = 0; i < v.n; ++i) 
        result.data[i] = v.data[i] * k;
    return result;
}

// Cho phép viết số trước (k * v)
cVector operator*(double k, const cVector& v) {
    return v * k;
}

// 4. Tích vô hướng hai Vector (v1 * v2) -> Trả về số thực
long operator*(const cVector& v1, const cVector& v2) {
    if (v1.n != v2.n) {
        cout << "Loi: Khong cung kich thuoc de tinh tich vo huong!" << endl;
        return 0.0;
    }
    double sum = 0;
    for (int i = 0; i < v1.n; ++i) 
        sum += v1.data[i] * v2.data[i];
    return sum;
}

// 5. Chia Vector cho một số
cVector operator/(const cVector& v, double k) {
    if (k == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return cVector();
    }
    cVector result(v.n);
    for (int i = 0; i < v.n; ++i) result.data[i] = v.data[i] / k;
    return result;
}