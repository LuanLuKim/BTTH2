#include "NgayThangNam.h"
#include <iomanip>

// Ham kiem tra nam nhuan
// Input: Nam
// Output: true neu la nam nhuan, false neu khong
// Giai thuat: Duoc xac dinh theo cong thuc nhuan (chia het cho 4 va khong chia het cho 100 hoac chia het cho 400)
bool leapYear(int Nam)
{
	if ((Nam % 4 == 0 && Nam % 100 != 0) || Nam % 400 == 0) return true;

	return false;
}
// Phuong thuc kiem tra tinh hop le cua 1 ngay thang nam
// Input: Khong co
// Output: true neu hop le, false neu khong
// Giai thuat: Kiem tra ngay thang nam co nam trong gioi han quy dinh
bool NgayThangNam:: kiemTraHopLe()
{
	int dayInMonth[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (iNgay < 1 || iThang>12 || iNam < 1) return false;

	if (leapYear(iNam))
		dayInMonth[1] = 29;
	if (iNgay > dayInMonth[iThang - 1]) return false;

	return true;
}

// Phuong thuc nhap ngay thang nam tu ban phim
// Input: Khong co
// Output: Gan gia tri cho iNgay, iThang, iNam
// Giai thuat: Su dung cin de nhap du lieu tu nguoi dung
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
// Phuong thuc xuat ngay thang nam
// Input: Khong co
// Output: hien thi ngay thang nam theo chuan ra man hinh
// Giai thuat: Su dung cout de xuat thong tin
void NgayThangNam::Xuat()
{
	cout << setw(2) << setfill('0') << iNgay;
	cout << '/' << setw(2) << setfill('0') << iThang;
	cout << '/' << iNam<<endl;
}
// Phuong thuc tinh ngay tiep theo
// Input: gia tri iNgay, iThang, iNam hien tai
// Output: hien thi ngay/thang/nam tiep theo
// Giai thuta: Tang ngay len 1 don vi, neu vuot qua gioi han cua thang thi tang thang len va dat ngay = 1
//			   Neu vuot qua gioi han thang thi tang nam va dat thang = 1 
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