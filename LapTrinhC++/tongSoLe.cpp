#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  int n =1;
  while (n <= 10)
  {
    cout << n << endl;
    n = n+1;
    if (n % 2 ==1) 
    sum=sum+n;
  }
  cout << "tong cac so le la:" << sum << endl;
  return 0;
}