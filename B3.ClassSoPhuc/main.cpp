#include "SoPhuc.h"

using namespace std;

int main()
{
	SoPhuc sp1, sp2, ketQua;
    cout << "Nhap so phuc thu nhat:\n"; sp1.Nhap();

    cout << "\nNhap so phuc thu hai:\n";  sp2.Nhap();

    cout << "\nSo phuc thu nhat: "; sp1.Xuat();

    cout << "\nSo phuc thu hai: "; sp2.Xuat();

    cout << "\nTong hai so phuc: ";
    ketQua = sp1.Tong(sp2);
    ketQua.Xuat();

    cout << "\nHieu hai so phuc: ";
    ketQua = sp1.Hieu(sp2);
    ketQua.Xuat();

    cout << "\nTich hai so phuc: ";
    ketQua = sp1.Tich(sp2);
    ketQua.Xuat();

    if (sp2.getfAo() == 0 && sp2.getfThuc() == 0)
        cout << "\nKhong the thuc hien phep chia.";
    else
    {
        cout << "\nThuong hai so phuc: ";
        ketQua = sp1.Thuong(sp2);
        ketQua.Xuat();
    }
}