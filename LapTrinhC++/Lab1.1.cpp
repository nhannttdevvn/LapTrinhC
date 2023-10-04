#include <iostream>
using namespace std;
int main()
{
  int banKinh, pi = 3,14;
  cout << "Nhap ban kinh duong tron: ";
  cin >> banKinh;
  int chuVi = banKinh * pi;
  int dienTich = banKinh * banKinh * pi;
  cout << "Chu vi duong tron: " << chuVi ;
  cout << "Dien Tich duong tron: " << dienTich;
  return 0;
}
{
  int tuoiHienTai, namHienTai, namKhac;
  cout << "Nhap tuoi hien tai: ";
  cin >> tuoiHienTai;
  cout <<"Nhap nam hien tai: ";
  cin >> namHienTai;
  cout <<"Nhap nam khac: ";
  cin >> namKhac;
  int tuoiKhac = (namKhac-namHienTai) + tuoiHienTai;
  cout << "Nam " << namKhac <<" ban " << tuoiKhac << " tuoi. ";
  return 0;
}