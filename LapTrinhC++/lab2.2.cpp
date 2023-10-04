#include <iostream>
using namespace std;
int main()
{
  char kiTu;
  cout << "Nhap vao chu cai tu a den z: ";
  cin >> kiTu;
   for(int i = 0; i <= 127; i++) {
    if (kiTu==(char)i) {
      cout << "Ma ASCII cua ky tu " << (char)i << " la " << i << endl;
    break;
    }
   }
  return 0;
}   