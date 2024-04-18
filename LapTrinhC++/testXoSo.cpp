#include <iostream>
using namespace std;
int main()
{
  int so_lan_choi = 0;
int du_doan;
int ket_qua;
bool doan_dung;
do
{
so_lan_choi = so_lan_choi + 1;
cin >> du_doan;
ket_qua = taoSoNgauNhien(XO_SO);
doan_dung = ket_qua == du_doan;
}
while (!doan_dung);
cout << so_lan_choi << endl;
  return 0;
}