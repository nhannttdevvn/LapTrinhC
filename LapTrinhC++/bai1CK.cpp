#include <iostream>
using namespace std;
void inSoNguyen(double a[], int n) 
{
  int dem = 0;
  cout << "Cac phan tu nguyen cua mang: ";
  for (int i = 0; i < n; i++)
  {
   if (a[i] == floor(a[i]))
    {
      cout << a[i] << " ";
      dem += 1;
    }
  }
  cout << endl;
  cout << "So ptu nguyen la: " << dem << endl;
}

void inSoTP(double a[], int n)
{
  cout << "Cac phan tu co 2 cso TP cua mang: ";
  for (int i = 0; i < n; i++)
  {
    if (a[i]*100 - (int)a[i]*100 != 0)
    {
      cout << a[i] << " ";
    }
  }
}
int main()
{
  int n;
  cout << "Nhap n lon hon 1: ";
  cin >> n;
  while (n < 1)
  {
    cout << "Nhap lai n lon hon bang 1: ";
    cin >> n;
  }
  double a[n];
    //khai báo mảng a gồm n phần tử
    // do bài có kiểm tra số thập phân, nên để kiểu dữ liệu mảng là double
  for (int i = 0; i < n; i++) // duyệt từng phần tử của mảng: cho i chạy từ 0 đến n, trong                              khi nó vẫn nhỏ hơn n thì i gán = i+1
  {
    cout << "Nhap phan tu thu " << i << " cua mang: ";
    cin >> a[i];
    while (a[i] < 1 || a[i] > 100)
    {
      cout << "Nhap sai, nhap lai phan tu thu " << i << " cua mang: ";
      cin >> a[i];
    }
  }
  inSoNguyen(a, n);
  inSoTP(a,n);
  return 0;
}
