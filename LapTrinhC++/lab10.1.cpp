#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream ifile;
  ofstream outFile("input.txt");
  int n = 0, a[256];
  ifile.open("input.txt");
  if (ifile.fail())
  {
    cout << "Loi mo file!";
    exit(1);
  }
  ifile >> (a[n]);
  while (!ifile.eof())
  {
    n++;
    ifile >> a[n];
  }
  int sum = 0;
  cout << "Cac gia tri luu trong file la: "<<endl;
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
    sum += a[i];
  }
  cout <<"tong la:" <<sum<<endl;
  return 0;