// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include "cMatrix.h"
#include "cVector.h"
#include <iomanip>
#include <cstdlib>
using namespace std;

// Constructor.
cMatrix::cMatrix(int r, int c){
    rows = r;
    cols = c;
    data.resize(r); 
    for (int i = 0; i < r; ++i) {
        data[i].resize(c);
        for (int j = 0; j < c; ++j) {
            data[i][j] = rand() % 10; 
        }
    }
}

// Getter.
int cMatrix::getRows(){ 
    return rows; 
}

int cMatrix::getCols(){ 
    return cols; 
}

// Input/Output
istream& operator>>(istream& is, cMatrix& m) {
    cout << "Nhap so dong: "; is >> m.rows;
    cout << "Nhap so cot: ";  is >> m.cols;
    m.data.resize(m.rows, vector<float>(m.cols));

    cout << "Nhap gia tri ma tran:\n";
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            cout << "Elements [" << i << "][" << j << "]: ";
            is >> m.data[i][j];
        }
    }
    return is;
}

ostream& operator<<(ostream& os, const cMatrix m) {
    int w = 3; 
    os << " ";
    for (int j = 0; j < m.cols; ++j) {
        os << "+";
        for (int k = 0; k < w; ++k) os << "-";
    }
    os << "+" << endl;

    for (int i = 0; i < m.rows; ++i) {
        os << " |";
        for (int j = 0; j < m.cols; ++j) {
            os << setw(w) << m.data[i][j] << "|";
        }
        os << endl;

        os << " ";
        for (int j = 0; j < m.cols; ++j) {
            os << "+";
            for (int k = 0; k < w; ++k) os << "-";
        }
        os << "+" << endl;
    }
    return os;
}

// Cộng hai Ma trận
cMatrix operator+(const cMatrix& m1, const cMatrix& m2) {
    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        cout << "Loi: Kich thuoc ma tran khong khop de cong!" << endl;
        return cMatrix();
    }
    cMatrix result(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; ++i)
        for (int j = 0; j < m1.cols; ++j)
            result.data[i][j] = m1.data[i][j] + m2.data[i][j];
    return result;
}

// 2. Trừ hai Ma trận
cMatrix operator-(const cMatrix& m1, const cMatrix& m2) {
    if (m1.rows != m2.rows || m1.cols != m2.cols) {
        cout << "Loi: Kich thuoc ma tran khong khop de tru!" << endl;
        return cMatrix();
    }
    cMatrix result(m1.rows, m1.cols);
    for (int i = 0; i < m1.rows; ++i)
        for (int j = 0; j < m1.cols; ++j)
            result.data[i][j] = m1.data[i][j] - m2.data[i][j];
    return result;
}

// 3. Nhân Ma trận với một số
cMatrix operator*(const cMatrix& m, float k) {
    cMatrix result(m.rows, m.cols);
    for (int i = 0; i < m.rows; ++i)
        for (int j = 0; j < m.cols; ++j)
            result.data[i][j] = m.data[i][j] * k;
    return result;
}

// Nhan k * m
cMatrix operator*(double k, const cMatrix& m) {
    return m * k;
}

// 4. Chia Ma trận cho một số
cMatrix operator/(const cMatrix& m, float k) {
    if (k == 0) {
        cout << "Loi: Khong the chia cho 0!" << endl;
        return cMatrix();
    }
    cMatrix result(m.rows, m.cols);
    for (int i = 0; i < m.rows; ++i)
        for (int j = 0; j < m.cols; ++j)
            result.data[i][j] = m.data[i][j] / k;
    return result;
}

// Nhân 2 Ma trận
cMatrix operator*(const cMatrix& m1, const cMatrix& m2) {
    if (m1.cols != m2.rows) {
        cout << "Loi: Kich thuoc ma tran khong hop le de nhan!\n";
        return cMatrix();
    }
    cMatrix result(m1.rows, m2.cols);
    for (int i = 0; i < m1.rows; ++i) {
        for (int j = 0; j < m2.cols; ++j) {
            double sum = 0;
            for (int k = 0; k < m1.cols; ++k) {
                sum += m1.data[i][k] * m2.data[k][j];
            }
            result.data[i][j] = sum;
        }
    }
    return result;
}

// Nhân Ma trận với Vector
cVector operator*(const cMatrix& m, const cVector& v) {    
    if (m.cols != v.n) { 
        cout << "Loi: Kich thuoc khong hop le (Cot Ma tran != Chieu Vector)!\n";
        return cVector();
    }

    cVector result(m.rows); 
    for (int i = 0; i < m.rows; ++i) {
        double sum = 0;
        for (int j = 0; j < m.cols; ++j) {
            sum += m.data[i][j] * v.data[j];
        }
        result[i] = sum;
    }
    return result;
}