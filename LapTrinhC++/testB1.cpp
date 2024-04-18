#include <iostream>
using namespace std;
void hamChanLe(int n) {
  if (n % 2 == 0) {
    cout << "Chan" << endl;
  } else {
    cout << "Le" << endl;
  }
}
int timUoc(int n, int mangUoc[]=0){
  int soUoc=0;
  for(int i=0;i<n;i++){
    if(n%i==0){
      soUoc++;
      mangUoc[i] = mangUoc[i+1];
      cout << "Mang la:"  << mangUoc << endl;
    }
  }
  return soUoc;
}
void timSoChinhPhuong(int n) {
  if (round(sqrt(n))== sqrt(n)){
    cout <<"La so cp"<< endl;
  } else cout<< "Khong la so cp" << endl;
}
void nhapMang(int mang[],int kichThuocMang){
  for (int i=0;i<kichThuocMang;i++){
    cin >> mang[i];
  }
}
void inMang(int mang[], int kichThuocMang){
  for (int i=0;i<kichThuocMang;i++){
    cout << mang[i] << endl;
  }
}
int main()
{
  int n;
  int kichThuocMang;
  cout <<"Nhap kich thuoc mang: " ;
  cin >> kichThuocMang;
  int mang[kichThuocMang];
  while (true)
  {
    cout << "Nhap so trong khoang 500-800: ";
    cin >> n;
    if (n >= 500 && n <= 800)
    {
      cout << "Ban da nhap dung N=" << n << endl;
      // hamChanLe(n);
      // timUoc(n);
      // timSoChinhPhuong(n);
      nhapMang[mang,kichThuocMang];
      inMang[mang,kichThuocMang];
      break;
    }
    else
      cout << "Nhap sai" << endl;
  }
  return 0;
}