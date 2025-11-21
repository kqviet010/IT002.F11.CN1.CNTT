#include "cNhanVienSX.h"

class cDSNhanVienSX{
    private:
        cNhanVienSX NVSX[100];
        int sl;
    public:
        // Constructor

        // Ham get, set
        int getSL();
        void setSL(int);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        void nvLuongThapNhat();
        float tongLuong();
        void nvTuoiCaoNhat();
        void sxNhanVien_TangDanTheoLuong();

        // Destructor
        ~cDSNhanVienSX();
};