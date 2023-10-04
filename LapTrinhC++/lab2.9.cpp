#include <iostream>
using namespace std;
int main()
{
    int soTuNhien, donVi, chuc, tram, thuong;
    cout << "Nhap so tu nhien co 3 chu so: ";
    cin << soTuNhien;
    thuong = soTuNhien / 10;
    chuc = thuong % 10;
    donVi = soTuNhien % 100;
    tram = soTuNhien / 100;
    cout << "So dao nguoc: " << donVi << chuc << tram;

    return 0;
}