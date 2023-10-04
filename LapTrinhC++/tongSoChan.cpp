#include <iostream>
using namespace std;
int main()
{
  int n=0;
  int sum=0;
  while (n<=10)
  {
    cout << n << endl;
    n = n+1;
    if (n % 2 == 0) 
    sum=sum+n; 
  }
  cout << "tong cac so chan la:" << sum << endl;
  return 0;
}