// Mã số sinh viên: 25730093
// Họ và tên sinh viên: Kiều Quang Việt
// Ngày sinh: 11/06/2000
// Lớp: IT002.F11.CN1.CNTT

#include <iostream>
#include <cstdlib>   // Chứa srand() và rand()
#include <ctime>     // Chứa time()
#include "cArray.h"
using namespace std;

int main(){
    cArray arr;
    int x;

    cout << "===================== NHAP MANG ======================\n";
    arr.taoMangNgauNhien();

    cout << "\n===================== XUAT MANG ======================\n";
    arr.Xuat();

    cout << "\n================== DEM SO LUONG X ====================\n";
    cout << "Enter x: ";
    cin >> x;
    if (arr.demX(x) != 0)
        cout << "Count x: " << arr.demX(x) << endl;      
    else
        cout << "Not found x.\n";

    cout << "\n================== KIEM TRA TANG DAN ====================\n";
    if (arr.kiemtraTangDan() == true)
        cout << "true\n";
    else
        cout << "false\n";

    cout << "\n================ TIM PHAN TU LE *MIN* ===================\n";
    if (arr.timPhanThuLe_Min() != -2)
        cout << arr.timPhanThuLe_Min() << endl;
    else
        cout << "Not found.\n"; 

    cout << "\n=============== TIM SO NGUYEN TO *MAX* ==================\n";
    cout << arr.timSNT_Max() << endl;

    cout << "\n============= SAP XEP MANG TANG DAN ===================\n";
    arr.sapxepTang();
    arr.Xuat();

    cout << "\n============= SAP XEP MANG GIAM DAN ===================\n";
    arr.sapxepGiam();
    arr.Xuat();

    return 0;
}