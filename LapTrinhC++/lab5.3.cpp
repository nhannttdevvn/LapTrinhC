#include <iostream>
using namespace std;
void inDauCachVaDauSao(int M, int N)
{
  for (int i = 0; i < M; i++)
  {
    cout << " ";
  }
  for (int i = 0; i < N; i++)
  {
    cout << "*";
  }
}
int main()
{
  int D;
  cout << "Nhap so dong D: ";
  cin >> D;
  for (int i = 1; i <= D; i++)
  {
    int dauCach = D - i;
    int dauSao = 2 * i - 1;
    inDauCachVaDauSao(dauCach, dauSao);
    cout << endl;
  }
  return 0;
}
