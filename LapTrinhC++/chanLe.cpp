#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "number = ";
  cin >> number;
  if (number % 2 == 0  ) {
    cout << "Day la so chan";
  }
  else {
    cout << "Day la so le";
  }
  return 0;
}