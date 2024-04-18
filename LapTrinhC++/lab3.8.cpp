#include <iostream>
using namespace std;
int main()
{
  double a,b,c;
  cout <<"Nhap vao 3 canh cua tam giac: ";
  cin >>a>>b>>c;
  if (a+b>c && b+c>a && c+a>b) 
    {cout<<"Thoa man bdt tam giac."<<endl;
    cout <<"Chu vi tam giac la: " << a+b+c << endl;
    if (a==b&&a==c) 
      cout <<"Tam giac can.";
    else if (a==b && b==c)
      cout  <<"Tam giac deu.";
    else if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==b*b+a*a)
      cout <<"Tam giac vuong.";
    else if (a*a>b*b+c*c || b*b>a*a+c*c || c*c>b*b+a*a)
      cout <<"Tam giac tu.";
    }

  return 0;
}