#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  int a;
  cout <<"Nhap so nguyen duong a= ";
  cin >> a;
  double b=sqrt(a);
  if ((round(b))==b) {
  cout <<"a la so chinh phuong";
  } else cout <<"khong phai";
  return 0;
}