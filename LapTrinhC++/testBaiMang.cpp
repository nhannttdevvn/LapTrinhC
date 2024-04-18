
#include <iostream>
using namespace std;

void nhapMang(int mang[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> mang[i];
    }
}



void tinhTong(int mang[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += mang[i];
    }
    float tbc = static_cast<float>(sum) / size; // Chuyển đổi kiểu dữ liệu ngầm định
    cout << "Tong la: " << sum << endl;
    cout << "TBC: " << tbc << endl;
}
void inChanLe(int mang[],int size){
  int demChan=0;
  cout <<" phan tu chan:";
  for (int i=0;i<size;i++){
    if(mang[i]%2==0){
      cout << mang[i] << " ";
      demChan++;
    }
  }
  
  cout << "soluong chan:"<<demChan<<endl;
  
}
void inLe(int mang[],int size){
  int demLe=0;
  cout <<"ptu le:";
  for (int i=0;i<size;i++){
    if(mang[i]%2==1){
      cout << mang[i] << " ";
      demLe++;
  }
  }
  cout << "soluong le:"<<demLe<<endl;

}
int main()
{
    int size;
    while (true)
    {
        cout << "Nhap vao size:";
        cin >> size;

        if (size > 0)
        {
            int mang[size];
            nhapMang(mang, size);
            cout << "Cac so duong trong mang:\n";
            for (int i = 0; i < size; i++)
            {
                if (mang[i] > 0)
                {
                    cout << mang[i] << endl;
                }
            }
            tinhTong(mang, size);
            inChanLe(mang,size);
            inLe(mang,size);
            break;
        }
        else
        {
            cout << "Nhap lai" << endl;
        }
     
    }
       return 0;
}
