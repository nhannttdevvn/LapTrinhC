#include <iostream>
using namespace std;
int main()
{
  int min, max, first_num, second_num;
  cout << "first_num = ";
  cin >> first_num;
  cout << "second_num = ";
  cin >> second_num;
  if (first_num < second_num) {
    min = first_num;
    max = second_num;
  } 
  else {
    min = second_num;
    max = first_num;
  }
  cout << "min = " << min << endl;
  cout << "max = " << max << endl; 
  return 0;
}