
class cPhanSo{
	private:
		int iTuSo;
		int iMauSo;
	public:
		// Constructor
		cPhanSo(int = 0, int = 0);
		
		// Ham get, set
		int getTuSo();
		int getMauSo();
		void setTuSo(int);
		void setMauSo(int);
		float getValue();

		// Ham chuc nang
		void Nhap();
		void Xuat();
		void rutGon();
	    cPhanSo Cong(cPhanSo p);	
	    cPhanSo Tru(cPhanSo p);
	    cPhanSo Nhan(cPhanSo p);
	    cPhanSo Chia(cPhanSo p);
		bool checkTuSolaSNT();

		// Destructor
		~cPhanSo();
};
