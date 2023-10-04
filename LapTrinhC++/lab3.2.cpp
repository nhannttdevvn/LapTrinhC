#include <iostream> 
using namespace std;
int main()
{
  char chuCai;
  cout <<"Nhap chu cai: ";
  cin << chuCai;
  if (chuCai <97) {
    chuCai = chuCai+32;
  }
  return 0;
}