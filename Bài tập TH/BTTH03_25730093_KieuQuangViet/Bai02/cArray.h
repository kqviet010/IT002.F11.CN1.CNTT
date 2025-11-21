#define MAX 100

class cArray{
    private:
        int a[100];
        int n;
    public:
        // Constructor


        // Ham get, set
        int getSL();
        void setSL(int);

        // Ham chuc nang
        void taoMangNgauNhien();
        void Xuat();
        int demX(int);
        bool kiemtraTangDan();
        int timPhanThuLe_Min();
        int timSNT_Max();
        void sapxepTang();
        void sapxepGiam();
        friend void swap(int &, int &);
        friend bool checkSNT(int);

        // Destructor
        ~cArray();

};