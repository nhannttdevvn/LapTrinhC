#include <iostream>
using namespace std;
int main()
{
  int first_num, second_num, third_num, max;
  cout << "first_num = ";
  cin >> first_num;
  cout << "second_num = ";
  cin >> second_num;
  cout << "third_num = ";
  cin >> third_num;
  if (first_num > second_num && first_num > third_num) {
        max = first_num;
    } else if (second_num > third_num) {
        max = second_num;
    } else {
        max = third_num;
    } 
    cout << "Max : " << max << endl;
  return 0;
}