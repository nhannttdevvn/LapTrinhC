#include <iostream>
using namespace std;
bool ktnt(int n)
{
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}
bool ktcp(int n)
{
  for (int i = 2; i < sqrt(n); i++)
  {
    if (sqrt(n) == round(sqrt(n)))
      return true;
  }
  return false;
}
int main()
{
  int dem=0;
  int a[10000];
  cout << "Nhap cac phan tu nguyen: ";
  for (int i = 0; i < 10000; i++)
  {
    cin >> a[i];
    dem++;
    if(a[i]==0){
      break;
    }
  }
  cout<<"So phan tu vua nhap: "<< dem-1;
  cout<<endl;
  cout<<"Cac phan tu la so chinh phuong: ";
  int demCP=0;
  for (int i = 0; i < 10000; i++)
  {
    if (ktcp(a[i])){
      demCP++;
      cout<<a[i] <<" ";
    }
  }
  int demNT=0;
  cout<<"Cac phan tu la so nguyen to: ";
  for (int i = 0; i < 10000; i++)
  {
    if (ktnt(a[i])){
      demNT++;
      cout<<a[i] <<" ";
    }
  }
  cout<< endl;
  cout<<"So luong la so nguyen to: "<< demNT;
 
  return 0;

}
