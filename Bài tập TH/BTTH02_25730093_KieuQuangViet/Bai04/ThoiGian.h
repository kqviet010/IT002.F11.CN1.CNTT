class ThoiGian{
private:
    int gio, phut, giay;
public:
    // Constructor
    ThoiGian(int h=0, int m=0, int s=0);

    // Ham get, set
    int getGio();
    int getPhut();
    int getGiay();
    void setGio(int h);
    void setPhut(int m);
    void setGiay(int s);

    // Ham chuc nang
    void nhapThoiGian();
    void xuatThoiGian();
    ThoiGian tangThoiGian(ThoiGian);
    ThoiGian giamThoiGian(ThoiGian);

    // Destructor
    ~ThoiGian();
};