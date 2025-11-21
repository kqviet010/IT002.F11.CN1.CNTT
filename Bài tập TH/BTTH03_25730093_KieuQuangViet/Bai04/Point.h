class Point{
	private:
		int x;
		int y;
	public:
		// Constructor
		Point(int x = 0, int y = 0);

		// Ham get, set
		int getX();
		int getY();
		void setX(int);	
		void setY(int);

		// Ham chuc nang
		void Nhap();
		void Xuat();
		Point tinhTien(Point p);
		double KhoangCach(Point p);
		Point PhongTo_ThuNho(float factor);
		
		// Destructor
		~Point();

};