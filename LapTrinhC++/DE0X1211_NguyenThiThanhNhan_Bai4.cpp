#include <iostream>
using namespace std;

bool checkNhap(string s)
{
  
}
int main()
{
  cout << "Nhap vao xau s: ";
  string s;
  getline(cin, s);
  cout << "Xau vua nhap:" << s;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      s[i] = toupper(s[i]);
    }
  }
  cout << endl;
  cout << "Xau sau khi chuyen yeu cau 1:" << s;
}