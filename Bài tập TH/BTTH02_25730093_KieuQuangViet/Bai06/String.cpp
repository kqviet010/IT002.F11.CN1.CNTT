#include <iostream>
#include <cstring>
#include "String.h"
using namespace std;

// Ham get, set
String String::getString(){
    String kq;
    for (int i = 0 ; i < this->len(); i++)
        kq.c[i] = c[i];
    return kq;
}

void String::setString(char c[100], int len){
    for (int i = 0; i < len; i++)
        this->c[i] = c[i];
}

void setString(char c[100]);

// Ham chuc nang
void String::Nhap(){
    cout << "Nhap chuoi: ";
    cin.getline(c, 1000);
}

void String::Xuat(){
    cout << "Xuat chuoi: ";
    cout << c;
}

int String::len(){
    int i = 0;
    while(c[i] != '\0')
        i++;

    return i;
}

String String::noiHaiChuoi(String s){
    String kq;
    int len_c = this->len();
    int len_s = s.len();
    for (int i = 0; i < len_c; i++)
        kq.c[i] = this->c[i];
    
    for (int i = 0; i < len_s; i++)
        kq.c[len_c + i] = s.c[i];
    return kq;
}
String String::daoChuoi(){
    String kq;
    int len = this->len();
    for (int i = 0; i < len; i++)
        kq.c[i] = this->c[len-1-i];
    
    return kq;
}

String String::chuyenChuHoa(){
    String kq;
    int len = this->len();
    for (int i = 0; i < len; i++){
        if (c[i] >= 'a' && c[i] <= 'z')
            kq.c[i] = c[i] - 32;
    }
    return kq;
}

String String::chuyenChuThuong(){
    String kq;
    int len = this->len();
    for (int i = 0; i < len; i++){
        if (c[i] >= 'A' && c[i] <= 'Z')
            kq.c[i] = c[i] + 32;
    }
    return kq;
}

// Destructor
String::~String(){}
