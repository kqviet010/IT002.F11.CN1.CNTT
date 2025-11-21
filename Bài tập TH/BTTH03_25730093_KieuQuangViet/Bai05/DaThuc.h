class DaThuc{
    private:
        float HeSo[100];
        int bac;
    public:
        // Constructor
        

        // Ham get, set
        int getBac();
        void setBac(int);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        DaThuc Cong(DaThuc);
        DaThuc Tru(DaThuc);
        float tinhDaThuc(float);

        // Destructor
        ~DaThuc();
};