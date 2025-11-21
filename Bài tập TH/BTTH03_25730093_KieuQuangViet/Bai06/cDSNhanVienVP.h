#include "cNhanVienVP.h"

class cDSNhanVienVP{
    private:
        cNhanVienVP NVVP[100];
        int sl;
    public:
        // Constructor

        // Ham get, set
        int getSL();
        void setSL(int);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        void nvLuongCaoNhat();
        float tongLuong();
        void nvTuoiCaoNhat();
        void sxNhanVien_TangDanTheoLuong();

        // Destructor
        ~cDSNhanVienVP();
};