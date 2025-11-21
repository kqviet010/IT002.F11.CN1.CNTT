#include <iostream>
#include "Point.h"
using namespace std;

// Constructor
Point::Point(int x, int y){
	this->x = x;
	this->y = y;
}


// Ham get, set
int Point::getX(){
	return x;
}

int Point::getY(){
	return y;
}

void Point::setX(int x){
	this->x = x;
}

void Point::setY(int y){
	this->y = y;
}


// Ham chuc nang
void Point::Nhap(){
	cout << "Nhap Hoanh do: ";
	cin >> x;
	cout << "Nhap Tung do: ";
	cin >> y;
}

void Point::Xuat(){
	cout << "(" << x << "," << y << ")" << endl;
}

Point Point::tinhTien(Point p){
	Point kq;
	kq.x = x + p.x;
	kq.y = y + p.y;
	
	return kq;
}

// Destructor
Point::~Point(){}