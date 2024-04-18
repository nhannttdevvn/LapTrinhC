#include <iostream>
using namespace std;
void tinhGiaiThua(int n)
{
  int gt = 1;
  cout << "n!=";
  for (int i = 0; i < n; i++)
  {
    gt = gt * (n - i);
  }
  cout << gt << endl;
}
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
bool ktcp(int n){
  for (int i=2;i<sqrt(n);i++){
    if (sqrt(n)==round(sqrt(n))) return true; 
  }
  return false;
}
bool kthh(int n){
  int sum=0;
  for (int i=1;i<n;i++){
    if (n%i==0){
      sum+=i;
    }
  }
  return sum==n;
}
void ktUoc(int n)
{
  bool coUoc=false;
  cout << "Cac uoc so la so chinh phuong nguyen duong cua " << n << " khac 1 la: ";
  for (int i = 2; i <= n; i++)
  {
    if (n % i == 0 && (kthh(i)))
    {
      coUoc=true;
      cout << i << " ";
    }
  }
  if (!coUoc) {
    cout <<"Khong co uoc nao.";
  }
}
int main()
{
  int n;
  cout << "Nhap n lon hon hoac bang 1: n=";
  cin >> n;
  while (n < 1)
  {
    cout << "Nhap sai, nhap lai n= ";
    cin >> n;
  }
  tinhGiaiThua(n);
  ktUoc(n);
  return 0;
}