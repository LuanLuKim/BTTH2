#pragma once
#include <iostream>

using namespace std;
class GioPhutGiay
{
private:
	int iGio, iPhut, iGiay;
	// Ham kiem tra tinh hop le cua thoi gian
	// Input: Khong co
	// Output: Tra ve true neu hop le, false neu khong hop le
	// Giai thuat: Kiem tra gio trong [0,23], phut va giay trong [0,59]
	bool KiemTra()
	{
		return (iGio >= 0 && iGio <= 23) && (iPhut >= 0 && iPhut <= 59) && (iGiay >= 0 && iGiay <= 59);
	}
public:
	GioPhutGiay() { iGio = iPhut = iGiay = 0; }
	void Nhap();
	void Xuat();
	void TinhCongThemMotGiay();
	~GioPhutGiay(){}
};

