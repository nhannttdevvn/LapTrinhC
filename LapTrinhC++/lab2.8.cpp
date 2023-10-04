#include <iostream> 
using namespace std;
int main()
{   
    int soNguyen,gio=1,ngay=24*gio,tuan=7*ngay,du,soTuan,soNgay,soGio;
    cout << "Nhap vao so nguyen:";
    cin >> soNguyen;
    int soTuan=soNguyen/tuan;
    int du=soNguyen%tuan;
    int soNgay= du/ngay;
    int soGio= du%ngay;
    return 0;