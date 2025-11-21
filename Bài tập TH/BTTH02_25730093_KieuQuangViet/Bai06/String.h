class String{
    private:
        char c[1000];
    public:
        // Constructor

        // Ham get, set
        String getString();
        void setString(char c[100], int len);
        
        // Ham chuc nang
        void Nhap();
        void Xuat();
        int len();
        String noiHaiChuoi(String s);
        String daoChuoi();
        String chuyenChuHoa();
        String chuyenChuThuong();
        
        // Destructor
        ~String();
};
