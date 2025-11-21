#include <string>
using namespace std;

class cNhanVienSX{  
    private:
        string MaNV;
        string HoTen;
        string NgaySinh;
        int SoSP;
        long DonGia;
        long Luong;
    public:
        // Constructor
        cNhanVienSX(string manv = "", string hoten = "", string ngaysinh = "", int sosp = 0, long dongia = 0);

        // Ham get, set
        string getMaNV();
        string getHoTen();
        string getNgaySinh();
        int getSoSP();
        long getDonGia();

        void setMaNV(string);
        void setHoTen(string);
        void setNgaySinh(string);
        void setSoSP(int);
        void setDonGia(long);
        void setLuong(long);

        int getTuoi();
        long getLuong();

        // Ham chuc nang
        void Nhap();
        void Xuat();

        // Destructor
        ~cNhanVienSX();
};