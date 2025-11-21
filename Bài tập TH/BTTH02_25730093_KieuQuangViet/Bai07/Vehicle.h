#include <iostream>
#include <string>
using namespace std;

class Vehicle{
    private:
        string ChuXe;
        string LoaiXe;
        long TriGia;
        int DungTich;
    public:
        // Constructor
        Vehicle(string = "\0", string = "\0", long = 0, int = 0);

        // Ham get, set
        string getChuXe();
        string getLoaiXe();
        long getTriGia();
        int getDungTich();
        void setChuXe(string);
        void setLoaiXe(string);
        void setTriGia(long);
        void setDungTich(int);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        double tinhThue();

        // Destructor
        ~Vehicle();
};