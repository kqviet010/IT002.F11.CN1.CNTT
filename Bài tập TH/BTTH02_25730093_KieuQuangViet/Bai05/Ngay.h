class Ngay{
private:
    int ngay;
    int thang;
    int nam;
public:
    // Constructor
    Ngay(int = 0, int = 0, int = 0);

    // Ham get, set
    int getNgay();
    int getThang();
    int getNam();
    void setNgay(int);
    void setThang(int);
    void setNam(int);

    // Ham chuc nang
    void Nhap();
    void Xuat();
    void tangMotNgay();
    void giamMotNgay();
    void layThu();
    bool ktNamNhuan();
    int soNgayTrongThang();
    bool checkHopLe();

    // Destructor
    ~Ngay();
};