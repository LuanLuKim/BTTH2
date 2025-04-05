#pragma once
#include <iostream>

using namespace std;

class NgayThangNam
{
private:
	int iNgay, iThang, iNam;
	bool kiemTraHopLe();
public:
	NgayThangNam(){}
	NgayThangNam(int d, int m, int y): iNgay(d), iThang(m), iNam(y){}

	void Nhap();
	void Xuat();
	void TinhNgayThangNamTiepThheo();

	~NgayThangNam(){}
};

