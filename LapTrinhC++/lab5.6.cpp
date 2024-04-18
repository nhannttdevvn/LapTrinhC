#include <iostream>
using namespace std;
int tinhPhiDoXe(double thoiGianDoXe)
{
  const int phiDauTien = 5000;
  const int phiTiepTheo = 2000;
  const int phiToiDa = 30000;
  const double gioDauTien = 3.0;

  int phi = 0;
  if (thoiGianDoXe <= gioDauTien)
  {
    phi = phiDauTien;
  }
  else
  {
    phi = phiDauTien + phiTiepTheo * (thoiGianDoXe - gioDauTien);
    if (phi > phiToiDa)
    {
      phi = phiToiDa;
    }
  }

  return phi;
}

int main()
{
  double thoiGian, tongThoiGian = 0;
  int tongPhi = 0;

  while (true)
  {
    cout << "Nhap tgian: ";
    cin >> thoiGian;

    if (thoiGian <= 0)
    {
      break;
    }

    int phi = tinhPhiDoXe(thoiGian);
    tongPhi += phi;
    tongThoiGian += thoiGian;
    if( phi <=30000){
      cout << "Phi: " << phi  << endl;
    } else cout << "Phi: 30000" << endl;
    
  }

  cout << "Tgian" << tongThoiGian << " gio " << endl;
  cout << "Tong phi " << tongPhi << endl;

  return 0;
}
