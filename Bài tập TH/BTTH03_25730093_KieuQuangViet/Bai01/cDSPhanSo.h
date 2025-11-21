#include "cPhanSo.h"
const int MAX = 100;


class cDSPhanSo{
    private:
        cPhanSo arr[MAX];
        int sl;
    public:
        // Constructor
        //cDSPhanSo(cPhanSo arr[MAX] = {}, int sl = 0);

        // Ham get, set
        //int getSL();
        //void setSL(int);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        cPhanSo tinhTong();
        cPhanSo timMin();
        cPhanSo timMax();
        cPhanSo timTuSNTMax();
        void sxTang();
        void sxGiam();

        // Destructor
        ~cDSPhanSo();
};