#include <iostream>
using namespace std;

int main()
{
  int n;
  while (true)
  {
    cout << "Nhap so tu 500 den 800: ";
    cin >> n;

    if (n <= 500 && n >= 800)
    {
      cout << "So nguyen N: " << n << endl;
    
      if (n % 2 == 0)
      {
        cout << "so do la chan." << endl;
      }
      else
        cout << " so do la le." << endl;
        break;
    }else {
      cout <<"Nhap sai. Nhap lai"<< endl;
    }
  }
  return 0;
}