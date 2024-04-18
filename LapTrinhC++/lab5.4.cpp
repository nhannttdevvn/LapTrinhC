#include <iostream>
#include <cmath>
using namespace std;
int roundDoubleCF(double number)
{
  double roundedValue = ceil(number); // Làm tròn lên trên bằng ceil
  int result = (int)roundedValue;     // Chuyển đổi kết quả thành số nguyên
  return result;
}

int main()
{
  double number;
  cout << "Nhập số thực: ";
  cin >> number;
  int roundedNumberCF = roundDoubleCF(number);
  cout << "Số thực là: " << number << endl;
  cout << "Số nguyên gần nhất (ceil): " << roundedNumberCF << endl;

  return 0;
}