#include "SoPhuc.h"
#include <cmath>
// Ham nhap so phuc
// Input: Khong co
// Output: Khong co ma la gan gia tri cho iThuc va iAo
// Giai thuat: Su dung cin de lay du lieu
void SoPhuc::Nhap()
{
    cout << "Nhap phan thuc: ";
    cin >> fThuc;
    cout << "Nhap phan ao: ";
    cin >> fAo;
}
// Ham xuat so phuc
// Input: Khong co
// Output: Khong co ma in ra man hinh duoi dang a + bi hoac a - bi
// Giai thuat: Dinh dang phu hop va xuat ra bang cout
void SoPhuc::Xuat()
{
    if (fThuc != 0)
    {
        cout << fThuc;
        if (fAo > 0) cout << '+';
        if (abs(fAo) != 1 && fAo != 0) cout << fAo;
        if (fAo != 0) cout << 'i';
    }
    else if (fThuc == 0 && fAo != 0)
    {
        if (abs(fAo) != 1) cout << fAo;
        cout << 'i';
    }
    else cout << 0;
}
// Ham tinh tong 2 so phuc
// Input: 1 SoPhuc khac
// Output: SoPhuc ket qua
// Giai thuat: Cong phan thuc va phan ao tuong ung
SoPhuc SoPhuc::Tong(SoPhuc sp)
{
    SoPhuc kq;
    kq.fThuc = this->fThuc + sp.fThuc;
    kq.fAo = this->fAo + sp.fAo;
    return kq;
}
// Ham tinh tong 2 so phuc
// Input: 1 SoPhuc khac
// Output: SoPhuc ket qua
// Giai thuat: Tru phan thuc va phan ao tuong ung
SoPhuc SoPhuc::Hieu(SoPhuc sp)
{
    SoPhuc kq;
    kq.fThuc = this->fThuc - sp.fThuc;
    kq.fAo = this->fAo - sp.fAo;
    return kq;
}
// Ham tinh tong 2 so phuc
// Input: 1 SoPhuc khac
// Output: SoPhuc ket qua
// Giai thuat:  Phan thuc = a*c - b*d 
//              Phan ao = a*d + b*c
SoPhuc SoPhuc::Tich(SoPhuc sp)
{
    SoPhuc kq;
    kq.fThuc = this->fThuc * sp.fThuc - this->fAo * sp.fAo;
    kq.fAo = this->fAo * sp.fThuc + this->fThuc * sp.fAo;
    return kq;
}
// Ham tinh tong 2 so phuc
// Input: 1 SoPhuc khac
// Output: SoPhuc ket qua
// Giai thuat:
//   Neu sp = 0 + 0i => bao loi
//   Mau: c^2 + d^2
//   Tu thuc: (a*c + b*d)
//   Tu ao  : (b*c - a*d)
//   Ket qua: [tu thuc/mau] + [tu ao/mau]i
SoPhuc SoPhuc::Thuong(SoPhuc sp)
{
    SoPhuc kq;
    float mau = sp.fThuc * sp.fThuc + sp.fAo * sp.fAo;
    kq.fThuc = (fThuc * sp.fThuc + fAo * sp.fAo) / mau;
    kq.fAo = (fAo * sp.fThuc - fThuc * sp.fAo) / mau;
    return kq;
}