#include <iostream>
using namespace std;
int main()
{
  int tuoiHienTai, namHienTai, namKhac;
  cout << "Nhap tuoi hien tai: ";
  cin >> tuoiHienTai;
  cout <<"Nhap nam hien tai: ";
  cin >> namHienTai;
  cout <<"Nhap nam khac: ";
  cin >> namKhac;
  int tuoiKhac = (namKhac-namHienTai) + tuoiHienTai;
  if (tuoiKhac >=0) {
     cout << "Nam " << namKhac << " ban " << tuoiKhac << " tuoi.";
  } else {
    cout << "Ban chua sinh ra vao nam " << namKhac;
  }
  return 0;
}