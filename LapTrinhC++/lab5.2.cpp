#include <iostream>
using namespace std;

void nhapPhepToan(char &phepToan)
{
  cout << "Nhập phép toán +, -, *, /, = : ";
  cin >> phepToan;
  while (phepToan != '+' && phepToan != '-' && phepToan != '*' && phepToan != '/'  && phepToan != '=')
  {
    cout << "Không hợp lệ! Hãy nhập lại phép toán: ";
    cin >> phepToan;
  }
}

int thucHienPhepToan(char phepToan, int a, int b)
{
  switch (phepToan)
  {
  case '+':
    return a + b;
  case '-':
    return a - b;
  case '*':
    return a * b;
  case '/':
    if (b != 0)
    {
      return a / b;
    }
    else
    {
      cout << "Lỗi: Chia cho 0!" << endl;
      return 0;
    }
  default:
    cout << "Phép toán không hợp lệ!" << endl;
    return 0;
  }
}

void inKetQuaBieuThuc(char phepToan, int a, int b) {
    cout << a << " " << phepToan << " " << b << " = " << thucHienPhepToan(phepToan, a, b) << endl;
}

void inKetQuaBieuThucHam(char phepToan, int a, int b) {
    cout << "(" << a << ", " << b << ") " << phepToan << " " << thucHienPhepToan(phepToan, a, b) << endl;
} 

int main()
{
  int a, b;
  char phepToan;
  cout << "Nhập 2 số nguyên: " << endl;
  cin >> a >> b;
  nhapPhepToan(phepToan);
  int ketQua = thucHienPhepToan(phepToan, a, b);
  cout << "Kết quả của phép toán " << a << " " << phepToan << " " << b << " = " << ketQua << endl;
  inKetQuaBieuThuc(phepToan,a,b);
  inKetQuaBieuThucHam(phepToan,a,b);
  return 0;
}
