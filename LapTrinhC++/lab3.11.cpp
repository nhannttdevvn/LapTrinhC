#include <iostream>
using namespace std;
int main()
{ int h=23,m=60,s=60;
  int a,b,c;
  cout <<"Nhap lan luot gio(0<=h<=23), phut(0<=m<=59),giay(0<=m<=59) : " << endl;
  cin >>a>>b>>c;
  int dentaH=h-a;
  int dentaM=m-b;
  int dentaS=m-c;
  int soGiay= dentaH*m*s + dentaM*s +dentaS;
  cout <<"So giay nua thi den 0h00p00s la: "<< soGiay << endl;
  return 0;
}