#include <iostream>
using namespace std;
int main()
{
int input;
int sum = 0;
cout << "Nhap cac so ngau nhien: ";
do {
  cin >> input;
  sum = sum+input;
}
while (input != 0);
cout << "Tong:" << sum << endl;
return 0;
}