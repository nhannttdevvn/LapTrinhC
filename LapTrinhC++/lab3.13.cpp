#include <iostream>
using namespace std;
int main()
{ 
  int num,chuSo;
  double donVi,chuc,tram,nghin,chucNghin;
  cout << "Nhap vao mot so lon hon 0 va nho hon hoac bang 99999: ";
  switch (chuSo)
  cin >> num;
    chucNghin=num/10000;
    nghin=(num/1000)%10;
    tram=(num/100)%10;
    chuc=(num/10)%10;
    donVi = num%10;
    if (chucNghin>=1) {
      cout <<chucNghin << " muoi ";
    }
    if (nghin>=1) {
      cout << nghin << " nghin ";
    }
    if (nghin>=1 && tram >=0) {
      cout <<tram << " tram ";
    }
    if (chuc>=1) {
      cout << chuc << " muoi ";
    } else {
      cout << "linh";
    }
    if (donVi>=1) {
      cout << donVi;
    } else {
      cout <<"muoi";
    } 
  return 0;
}