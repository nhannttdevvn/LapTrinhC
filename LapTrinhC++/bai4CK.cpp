#include <iostream>
using namespace std;
struct NgayThangNam
{
  int ngay;
  int thang;
  int nam;
};

struct sv
{
  string ten, cccd;
  NgayThangNam ngaySinh;
};
bool hopLe(NgayThangNam &n)
{
  if (n.nam <= 0)
    return false;
  if (n.thang < 1 || n.thang > 12)
    return false;
  int ngayToiDa[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (n.nam % 4 == 0 && n.nam % 100 || n.nam % 400 == 0)
  {
    ngayToiDa[1] = 29;
  }
  if (n.ngay < 1 || n.ngay > ngayToiDa[n.thang - 1])
    return false;
  return true;
};

void nhap(sinhVien &sv)
{
  cout << "Nhap ten sinh vien: ";
  getline(cin, sv.ten);
  cout << "Nhap ngay sinh: ";
  while (!hopLe(sv.ngaySinh))
  {
    cin >> sv.ngaySinh.ngay >> sv.ngaySinh.thang >> sv.ngaySinh.nam;
    if (!hopLe(sinhVien.ngaySinh))
    {
      cout << "Ngay thang nam sinh khong hop le, nhap lai: ";
    }
  }
}