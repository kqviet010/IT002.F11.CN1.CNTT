#include "Point.h"

class TamGiac{
    private:
        Point A, B, C;
    public:
        // Constructor
        //TamGiac(Point A = (0,0), Point B = (0,0), Point C = (0,0));

        // Ham get, set


        // Ham chuc nang
        void Nhap();
        void Xuat();
        void kiemtraLoaiTamGiac();
        double tinhChuVi();
        double tinhDienTich();
        void tinhTienTG(Point);
        void PhongTo_ThuNho(float);
        Point TrongTam();

        // Destructor
        ~TamGiac();
};