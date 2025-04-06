#include "PhanSo.h"
#include <cmath>

// Ham tinh UCLN bang thuat toan Euclid
// Input: 2 so nguyen a, b
// Output: Gia tri UCLN
int gcd(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0) return a + b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
// Rut gon phan so
// Input: Khong co
// Output: iTu và iMau da duoc rut gon
// Giai thuat: Tim UCLN va chia tu mau cho UCLN va xu ly so am
void PhanSo::RutGon()
{
	int ucln = gcd(iTu, iMau);
	iTu /= ucln;
	iMau /= ucln;
	if (iMau < 0) 
	{
		iTu = -iTu;
		iMau = -iMau;
	}
}
// Phuong thuc nhap phan so tu ban phim
// Input: Khong co
// Output: Gan gia tri cho iTu, iMau (mau phai khac 0)
void PhanSo::Nhap()
{
	while(true)
	{
		cout << "Nhap tu mau cho phan so: ";
		cin >> iTu >> iMau;
		if (!KiemTraHopLe())
			cout << "Phan so khong hop le. Vui long nhap lai." << endl;
		else break;
	}
}
// Phuong thuc xuat phan so ra man hinh
// Input: Khong co
// Output: In ra phan so theo 1 chuan
void PhanSo::Xuat()
{
	this->RutGon();
	cout << iTu;
	if (iTu != 0 && iMau != 1)
		cout << '/' << iMau;
}
// Cong 2 phan so
// Input: Phan so p2
// Output: Tong 2 phan so
// Giai thuat: Quy dong va cong 2 tu so, sau do rut gon
PhanSo PhanSo::Tong(const PhanSo& p2)
{
	PhanSo c;
	c.iTu = iTu * p2.iMau + p2.iTu * iMau;
	c.iMau = iMau * p2.iMau;
	c.RutGon();

	return c;
}
// Tru 2 phan so
// Input: Phan so p2
// Output: Hieu 2 phan so
// Giai thuat: Quy dong va tru 2 tu so, sau do rut gon
PhanSo PhanSo::Hieu(const PhanSo& p2)
{
	PhanSo c;
	c.iTu = iTu * p2.iMau - p2.iTu * iMau;
	c.iMau = iMau * p2.iMau;
	c.RutGon();

	return c;
}
// Nhan 2 phan so
// Input: Phan so p2
// Output: Tich 2 phan so
// Giai thuat: Nhan tu voi tu, mau voi mau va sau do rut gon
PhanSo PhanSo::Tich(const PhanSo& p2)
{
	PhanSo c;
	c.iTu = iTu * p2.iTu;
	c.iMau = iMau * p2.iMau;
	c.RutGon();

	return c;
}
// Nhan 2 phan so
// Input: Phan so p2
// Output: Thuong 2 phan so
// Giai thuat: Kiem tra neu tu so cua phan so 2 co = 0.
// Neu co thi xuat thong bao khong the thuc hien phep chia 
// Neu khong nhan nghich dao phan so 1 voi phan so 2 va sau do rut gon
PhanSo PhanSo::Thuong(const PhanSo& p2)
{
	
	PhanSo c;
	c.iTu = iTu  * p2.iMau;
	c.iMau = iMau * p2.iTu;
	c.RutGon();

	return c;
}
// So sanh 2 phan so
// Input: Phan so p2
// Output: -1 ( p1 < p2), 0 ( p1 = p2 ) va 1 ( p1 > p2 )
// Giai thuat: so sanh bang cach hieu 2 phan so va xet dau
int PhanSo::SoSanh(const PhanSo& p2)
{
	PhanSo c;
	c = this->Hieu(p2);
	if (c.iTu < 0)
		return -1;
	else if (c.iTu == 0)
		return 0;
	else
		return 1;
}