#include <iostream>
using namespace std;
int main()
{ // a la tien 1 gio, b la so gio lam tren tuan, c la so gio lam qua
  // T1 la tien luong trc thue, T2 la tien sau thue phai tra
  // thueBhxh la t1, thue Thunhap la t2
  int soCon, soGio;
  double a=16.78, b=37.5,t1 = 0.05, t2 = 0.12,T1,T2;
  cout << "So gio lao dong tren tuan: ";
  cin >> soGio;
  cout <<"So con trong gd: ";
  cin >> soCon;
  int c=soGio-b;
  if (c>0) {
    T1=a*b+c*1.5*a;
  } 
  cout <<"Tien luong truoc thue: " <<T1 << endl;
  double thue;
  if (soCon>=3) {
    thue = T1*(t1+t2)+10+35;
  } else {
    thue = T1*(t1+t2);
  }
  cout << "Tien thue phai tra: " <<thue << endl;
  T2=T1-thue;
  cout << "Tien sau thue: " <<T2;
  return 0;
}