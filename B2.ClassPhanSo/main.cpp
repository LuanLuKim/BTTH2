#include "PhanSo.h"

using namespace std;

int main()
{
	PhanSo p1, p2;
	cout << "Nhap phan so thu 1. " << endl;
	p1.Nhap();
	cout << "Nhap phan so thu 2. " << endl;
	p2.Nhap();

	cout << "Phan so thu 1: "; p1.Xuat();
	cout << "\nPhan so thu 2: "; p2.Xuat();

	cout << "\nTong 2 phan so: "; (p1.Tong(p2)).Xuat();
	cout << "\nHieu 2 phan so: "; (p1.Hieu(p2)).Xuat();
	cout << "\nTich 2 phan so: "; (p1.Tich(p2)).Xuat();

	if (p2.getiTu() == 0)
		cout << "\nPhep chia khong hop le.";
	else
	{
		cout << "\nThuong 2 phan so: ";
		(p1.Thuong(p2)).Xuat();
	}

	if (p1.SoSanh(p2) == -1)
	{
		cout << "\nPhan so "; p1.Xuat();
		cout << " nho hon phan so "; p2.Xuat();
	}
	else if (p1.SoSanh(p2) == 0)
	{
		cout << "\n2 phan so nay bang nhau va bang ";
		p1.Xuat();
	}
	else
	{
		cout << "\nPhan so "; p1.Xuat();
		cout << " lon hon phan so "; p2.Xuat();
	}
}