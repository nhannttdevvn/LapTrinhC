#include <iostream>
using namespace std;
void nhapMang(int value[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> value[i];
  }
}
void inMang(int value[], int size)
{
  for (int i = 0; i < size; i++)
    cout << value[i] << endl;
}
int tinhTBC(int value[], int size)
{
  int sum1 = 0;
  for (int i = 0; i < size; i++)
  {
    sum1 += value[i];
  }
  int tbc = sum1 / size;
  cout << "Trung bình cộng:  " << tbc << endl;
  return (tbc);
}
void tinhPS(int value[], int size, int tbc)
{
  int sum2 = 0;
  for (int i = 0; i < size; i++)
  {
    sum2 += (value[i] - tbc) * (value[i] - tbc);
  }
  cout << "Tong phuong sai la:" << sum2;
}
int main()
{
  int size;
  cout << "Nhap kich thuoc mang: ";
  cin >> size;
  int value[size];
  nhapMang(value, size);
  inMang(value, size);
  int tbc = tinhTBC(value, size);
  tinhPS(value, size, tbc);
  return 0;
}