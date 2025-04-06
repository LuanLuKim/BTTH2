#pragma once
#include <iostream>

using namespace std;

int gcd(int a, int b);

class PhanSo
{
private:
	int iTu, iMau;
	bool KiemTraHopLe()
	{
		if (iMau == 0) return false;
		return true;
	}
	void RutGon();
public:
	PhanSo() { iTu = 0, iMau = 1; }
	void Nhap();
	void Xuat();
	PhanSo Tong(const PhanSo &p2);
	PhanSo Hieu(const PhanSo& p2);
	PhanSo Tich(const PhanSo& p2);
	PhanSo Thuong(const PhanSo& p2);
	int getiTu() { return iTu; }
	int SoSanh(const PhanSo& p2);

	~PhanSo(){}
};

