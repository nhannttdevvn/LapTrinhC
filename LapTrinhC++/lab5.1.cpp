#include <iostream>
#include <cmath>
using namespace std;
void tong(int a, int b=!0)
{
  cout << "Tong a+b = " << a + b << endl;
}
void hieu(int a, int b)
{
  cout << "Hieu a-b = " << a - b << endl;
}
void tich(int a, int b)
{
  cout << "Tich a*b = " <<  a * b << endl;
}
void chiaLayDu(int a, int b){
  cout << "a/b du " << a%b << endl;
}
int main()
{
  int a, b;
  cout << "Nhap vao 2 so nguyen: " << endl;
  cin >> a >> b;
  tong(a, b);
  hieu(a, b);
  tich(a, b);
  chiaLayDu(a,b);
  return 0;
}