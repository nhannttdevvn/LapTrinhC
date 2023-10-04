#include <iostream>
using namespace std;
int main()
{
  float chieuDai,chieuRong;
  cout << "Nhap chieu dai: ";
  cin >> chieuDai;
   cout << "Nhap chieu rong: ";
  cin >> chieuRong;
  float chuVi = (chieuDai + chieuRong)/2;
  float dienTich = chieuDai * chieuRong;
  cout << "Chu vi:  " << chuVi << endl; 
  cout << "Dien Tich : " << dienTich;
  return 0;
}