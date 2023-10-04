#include <iostream>
using namespace std;
int main()
{
  int sum = 0;
  int n=1;
  while ( n<=10){
    cout << n << endl;
    n = n+1; 
    sum = sum + n;
  }
  cout << "Tong cac so la:" ;
  cout << sum << endl;
  return 0;
}