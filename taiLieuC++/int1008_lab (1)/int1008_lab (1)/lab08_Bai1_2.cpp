#include <iostream>
using namespace std;
typedef int * IntPtrType;
int main()
{
    int N, *a, sa[1000], i;
    int total=0;
    //Nhap du lieu
    cout <<"Nhap vao so phan tu cua Mang (phai la so le): ";
    cin >> N;
    if (N % 2 == 0){
    cout << "N phai la so le!\n";
    return 0;
    }
    for (int i = 0; i < N; i++)
    cin >> *(sa+i);
    //Thay doi chi so day so
    a = sa;
    // + N / 2;
    //Tinh tong
    for (int i = 0; i< N; i++)
    total += a[i];
    cout << "Gia tri tong cac phan tu trong mang la: "<<total;
    return 0;
}
