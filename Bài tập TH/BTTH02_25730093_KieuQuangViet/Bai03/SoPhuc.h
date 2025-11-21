class SoPhuc{
    private:
        float PhanThuc;
        float PhanAo;
    public:
        // Constructor
        SoPhuc(float = 0, float = 0);

        // Ham get, set
        float getPhanThuc();
        float getPhanAo();
        void setPhanThuc(float);
        void setPhanAo(float);

        // Ham chuc nang
        void Nhap();
        void Xuat();
        SoPhuc Cong(SoPhuc);
        SoPhuc Tru(SoPhuc);
        SoPhuc Nhan(SoPhuc);
        SoPhuc Chia(SoPhuc);

        // Destructor
        ~SoPhuc();
};