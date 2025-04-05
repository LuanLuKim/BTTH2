#include "NgayThangNam.h"
#include <iomanip>

bool leapYear(int Nam)
{
	if ((Nam % 4 == 0 && Nam % 100 != 0) || Nam % 400 == 0) return true;

	return false;
}

bool NgayThangNam:: kiemTraHopLe()
{
	int dayInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (iNgay < 1 || iThang>12 || iNam < 1) return false;

	if (leapYear(iNam))
		dayInMonth[1] = 29;
	if (iNgay > dayInMonth[iThang - 1]) return false;

	return true;
}


void NgayThangNam::Nhap()
{
	do
	{
		cout << "Nhap ngay thang nam (dd mm yyyy): ";
		cin >> iNgay >> iThang >> iNam;
		if (!(this->kiemTraHopLe()))
			cout << "Ngay thang nam khong hop le. Vui long nhap lai\n";
	} while (!(this->kiemTraHopLe()));
}
void NgayThangNam::Xuat()
{
	cout << setw(2) << setfill('0') << iNgay;
	cout << '/' << setw(2) << setfill('0') << iThang;
	cout << '/' << iNam<<endl;
}
void NgayThangNam::TinhNgayThangNamTiepThheo()
{
	int dayInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	iNgay++;
	if (leapYear(iNam)) dayInMonth[1] = 29;
	if (iNgay > dayInMonth[iThang - 1])
	{
		iNgay = 1;
		iThang++;
		if (iThang > 12)
		{
			iThang = 1;
			iNam++;
		}
	}

}