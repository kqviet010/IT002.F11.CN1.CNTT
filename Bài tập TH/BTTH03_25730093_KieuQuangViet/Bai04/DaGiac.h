#include "Point.h"

class DaGiac{
    private:
        Point point[100];
        int dinh;
    public:
        // Constructor
        DaGiac();
        DaGiac(int);

        // Ham get, set


        // Ham chuc nang
        void Nhap();
        void Xuat();
        double tinhChuVi();
        double tinhDienTich();
        void tinhTienDG(Point);
        void PhongTo_ThuNho(float);

        // Destructor
        ~DaGiac();
};