#include <iostream>
#include <climits>
using namespace std;

int main()
{
  int diem, tongDiem = 0, soSinhVien = 0;
  int diemCaoNhat = INT_MIN;
  int diemThapNhat = INT_MAX;

  cout << "Nhập điểm của sinh viên (nhập số âm để kết thúc): ";
  while (true)
  {
    cin >> diem;

    if (diem < 0)
    {
      break;
    }

    soSinhVien++;
    tongDiem += diem;

    if (diem > diemCaoNhat)
    {
      diemCaoNhat = diem;
    }

    if (diem < diemThapNhat)
    {
      diemThapNhat = diem;
    }
  }

  if (soSinhVien == 0)
  {
    cout << "Không có dữ liệu để tính." << endl;
  }
  else
  {
    double diemTrungBinh = static_cast<double>(tongDiem) / soSinhVien;

    cout << "Số lượng sinh viên trong lớp: " << soSinhVien << endl;
    cout << "Điểm trung bình của cả lớp: " << diemTrungBinh << endl;
    cout << "Điểm cao nhất của lớp: " << diemCaoNhat << endl;
    cout << "Điểm thấp nhất của lớp: " << diemThapNhat << endl;
  }

  return 0;
}
