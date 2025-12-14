// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cstdlib> 
#include <ctime>   
#include "cMatrix.h"
#include "cVector.h"
using namespace std;

int main() {
    srand(time(NULL)); 

    // --- TEST VECTOR ---
    cout << "================== TEST VECTOR ==================" << endl;
    // Tạo vector v1 có 5 phần tử ngẫu nhiên
    cVector v1(3);
    cVector v2(3);
    cout << "Vector(v1) ngau nhien vua tao: " << endl;
    cout << v1 << endl;

    cout << "Vector(v2) ngau nhien vua tao: " << endl;
    cout << v2 << endl;

    cout << "\nv1 + v2 = " << (v1 + v2) << endl;
    cout << "v1 - v2 = " << (v1 - v2) << endl;
    cout << "v1 * 2  = " << (v1 * 2) << endl;
    cout << "v1 / 2  = " << (v1 / 2.0) << endl;
    cout << "Tich vo huong (v1 * v2) = " << (v1 * v2) << endl;

    // --- TEST MATRIX ---
    cout << "\n================== TEST MATRIX ==================" << endl;
    // Tao mot ma tran co 5x5 phan tu ngau nhien
    cMatrix m1(3, 3);
    cMatrix m2(3, 3);
    cout << "\nMatrix(m1) ngau nhien vua tao: " << endl;
    cout << m1 << endl;

    cout << "\nMatrix(m2) ngau nhien vua tao: " << endl;
    cout << m2 << endl;

    cout << "\nm1 + m2:\n" << (m1 + m2) << endl;
    cout << "m1 - m2:\n" << (m1 - m2) << endl;
    cout << "m1 * 10:\n" << (m1 * 10) << endl;

    cout << "\n================== Nhan m1 * v1 ==================\n";
    cout << m1 * v1;

    cout << "\n\n================== Nhan m1 * m2 ==================\n";
    cout << m1 * m2;

    return 0;
}