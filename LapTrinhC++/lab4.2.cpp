#include <iostream>
#include <cmath>
using namespace std;

int findDivisor(int a) // tim Uoc
{
  cout << "Cac uoc la: " << endl;
  int soUoc = 0;
  for (int i = 1; i <= a; i++)
  {
    if (a % i == 0)
    {
      cout << i << endl;
      soUoc++;
    }
  }
  return soUoc;
}
void findPrimeNum(int a) // tim so nguyen to.
{
  int soUoc;
  soUoc = findDivisor(a);
  if (soUoc == 2)
    cout << "La so nguyen to." << endl;
  else
    cout << "Khong la so nguyen to." << endl;
}
void findPerfectSquare(int a) //tim so chinh phuong
{
  if (round(sqrt(a)) == sqrt(a))
  {
    cout << "La so cp." << endl;
  }
  else
  {
    cout << "Khong la so cp." << endl;
  }
}
void findSumNum(int a)
{
  int sum = 0; // d la so du sau khi chia 10
  while (a != 0)
  {
    int d = a % 10;
    sum += d;
    a /= 10;
  }
  cout << "Tong cac chu so cua a: " << sum << endl;
}

void findSumOdd(int b)
{
  int sumLe = 0, tichChan = 1;
  for (int j = 1; j < b; j++)
  {
    if (j % 2 == 1)
    {
      sumLe += j;
    }
    else
    {
      tichChan *= j;
    }
  }
  cout << "Tong cac so le nho hon a: " << sumLe << endl;
  cout << "Tich cac so chan nho hon a: " << tichChan << endl;
}
int findReverseNum(int b){
    int soDaoNguoc = 0;
    while (b > 0) {
        int chuSoCuoi = b % 10;
        soDaoNguoc = soDaoNguoc * 10 + chuSoCuoi;
        b /= 10;
    }
    cout <<"So dao nguoc la:" << soDaoNguoc << endl;
}
int main()
{
  int a, b;
  while (true)
  {
    cout << "Nhap so nguyen duong a: ";
    cin >> a;
    if (a > 0)
    {
      b = a;
      break;
    }
    else
    {
      cout << "Hay nhap lai a." << endl;
    }
  }
  cout << "So nguyen a: " << a << endl;
  findDivisor(a);
  findPrimeNum(a);
  findPerfectSquare(a);
  findSumNum(a);
  findSumOdd(b);
  findReverseNum(b);
  return 0;
}
