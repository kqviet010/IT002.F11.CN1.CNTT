#include <string>
using namespace std;

class cNhanVienVP{  
    private:
        string MaNV;
        string HoTen;
        string NgaySinh;
        double Luong;
    public:
        // Constructor
        cNhanVienVP(string manv = "", string hoten = "", string ngaysinh = "", double luong = 0);

        // Ham get, set
        string getMaNV();
        string getHoTen();
        string getNgaySinh();
        double getLuong();
        void setMaNV(string);
        void setHoTen(string);
        void setNgaySinh(string);
        void setLuong(double);
        int getTuoi();

        // Ham chuc nang
        void Nhap();
        void Xuat();



        // Destructor
        ~cNhanVienVP();
};