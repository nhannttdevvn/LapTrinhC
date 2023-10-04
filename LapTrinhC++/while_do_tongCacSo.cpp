#include <iostream>
using namespace std;
int main()
{
  int sum=0;
  int input;
  cout << "Nhap gia tri: ";
  do {
    cin >> input;
    sum=sum+input;
  }
  while (input !=0);
  cout << "Tong:" << sum << endl;
  return 0;
}