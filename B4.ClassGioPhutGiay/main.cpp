#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

int main()
{
    GioPhutGiay tg;

    cout << "Nhap thoi gian.\n";
    tg.Nhap();

    cout << "Thoi gian ban dau: ";
    tg.Xuat();

    tg.TinhCongThemMotGiay();
    cout << "\nSau khi cong them 1 giay: ";
    tg.Xuat();
}