#include <iostream>
using namespace std;
int main()
{
  float banKinh, pi = 3.14f;
  cout << "Nhap ban kinh duong tron: ";
  cin >> banKinh;
  float chuVi = 2 * banKinh * pi;
  float dienTich = banKinh * banKinh * pi;
  cout << "Chu vi duong tron: " << chuVi << endl; 
  cout << "Dien Tich duong tron: " << dienTich;
  return 0;
}