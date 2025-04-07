#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	float fThuc, fAo;
public:
    SoPhuc() { fThuc = 0, fAo = 0; }

    void Nhap();
    void Xuat();
    SoPhuc Tong(SoPhuc sp);
    SoPhuc Hieu(SoPhuc sp);
    SoPhuc Tich(SoPhuc sp);
    SoPhuc Thuong(SoPhuc sp);
    float getfThuc() { return fThuc; }
    float getfAo() { return fAo; }

    ~SoPhuc(){}
};

