// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include "SoPhuc.h"
using namespace std;

int main(){
    SoPhuc a, b, kq;

    cout << "=========== NHAP HAI SO PHUC ============\n";
    cin >> a;
    cout << endl;
    cin >> b;

    cout << "\n=========== XUAT HAI SO PHUC ============\n";
    cout << "a = ";
    cout << a;
    cout << "b = ";
    cout << b;

    cout << "\n=========== CONG HAI SO PHUC A + B ============\n";
    kq = a + b;
    cout << kq;

    cout << "\n=========== TRU HAI SO PHUC A - B ============\n";
    kq = a - b;
    cout << kq;

    cout << "\n=========== NHAN HAI SO PHUC A * B ============\n";
    kq = a * b;
    cout << kq;

    cout << "\n=========== CHIA HAI SO PHUC A / B ============\n";
    kq = a / b;
    cout << kq;

    cout << "\n=========== SO SANH A & B ============\n";
    if (a == b)
        cout << "a = b";
    else
        cout << "a != b";

    return 0;
}