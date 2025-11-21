#include <iostream>
#include <cstdlib>   // Chứa srand() và rand()
#include <ctime>     // Chứa time()
#include "cArray.h"
using namespace std;


///SWAP
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
///Check So Nguyen To
bool checkSNT(int n){
    if (n <= 1) {
        return false; 
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Constructor


// Ham get, set
int cArray::getSL(){
    return n;
}

void cArray::setSL(int sl){
    n = sl;
}


// Ham chuc nang
void cArray::taoMangNgauNhien(){
    cout << "Enter n: ";
    cin >> n;

    srand(time(NULL));
    for (int i = 0; i < n; i++)
        a[i] = (rand() % 100) + 1;

}

void cArray::Xuat(){
    for (int i = 0; i < n; i++)
        cout << "[" << i << "]  " << a[i] << endl;
}

int cArray::demX(int x){
    int count = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            count++;
    return count;
}

bool cArray::kiemtraTangDan(){
    for (int i = 0; i < n-1; i++)
        if (a[i] > a[i+1])
            return false;
    return true;
}

int cArray::timPhanThuLe_Min(){
    int leMin = -2;     // flag = -2
    
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 0){
            leMin = a[i];
            break;
        }
    
    for (int i = 0; i < n; i++)
        if (a[i] % 2 == 1 && a[i] < leMin)
            leMin = a[i];
    return leMin;
}

int cArray::timSNT_Max(){
    int snt_max = 0;    // flag = 0
    for (int i = 0; i < n; i++)
        if (checkSNT(a[i]) == true && a[i] > snt_max)
            snt_max = a[i];
    return snt_max;
}

void cArray::sapxepTang(){
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] > a[j])
                swap(a[i], a[j]);
}

void cArray::sapxepGiam(){
    for (int i = 0; i < n-1; i++)
        for (int j = i+1; j < n; j++)
            if (a[i] < a[j])
                swap(a[i], a[j]);
}


// Destructor
cArray::~cArray(){}