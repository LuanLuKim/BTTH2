#include "GioPhutGiay.h"
#include <iomanip>
// Ham nhap thoi gian tu ban phim
// Input: Khong co
// Output: Gan gia tri cho iGio, iPhut, iGiay neu hop le
// Giai thuat: Dung cin de nhap lieu, goi ham KiemTraHopLe de kiem tra. Neu sai thi yeu cau nhap lai
void GioPhutGiay:: Nhap()
{
    do {
        cout << "Nhap gio (0-23): ";
        cin >> iGio;
        cout << "Nhap phut (0-59): ";
        cin >> iPhut;
        cout << "Nhap giay (0-59): ";
        cin >> iGiay;
        if (!KiemTra())
            cout << "Thoi gian khong hop le. Vui long nhap lai" << endl;
    } while (!KiemTra());
}
// Ham xuat thoi gian ra man hinh
// Input: khong co
// Output: in ra thoi gian theo dinh dang hh:mm:ss
// Giai thuat: Dung cin xuat tung thanh phan gio, phut, giay voi so 0 o dau neu < 10
void GioPhutGiay::Xuat()
{
    cout << setw(2) << setfill('0') << iGio;
    cout << ':' << setw(2) << setfill('0') << iPhut;
    cout << ':' << setw(2) << setfill('0') << iGiay;
}
// Ham cong them 1 giay vao thoi gian hien tai
// Input: Khong co
// Output: Cap nhat lai iGiay, iPhut, iGio neu can
// Giai thuat:
// - Tang iGiay len 1
// - Neu iGiay >= 60 thi dat iGiay = 0 va tang iPhut
// - Neu iPhut >= 60 thi dat iPhut = 0 va tang iGio
// - Neu iGio >= 24 thi dat iGio = 0
void GioPhutGiay::TinhCongThemMotGiay()
{
    iGiay++;
    if (iGiay >= 60)
    {
        iGiay = 0;
        iPhut++;
        if (iPhut >= 60)
        {
            iPhut = 0;
            iGio++;
            if (iGio >= 24)
                iGio = 0;
        }
    }
}
