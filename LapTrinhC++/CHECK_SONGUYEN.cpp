#include <iostream>
using namespace std;
void nhapMang(int mang[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> mang[i];
  }
}

void timPhanTuNguyen(int mang[],int size,int demNg){
  for (int i=0; i<size; i++){
    if (mang[i]==floor(mang[i])){
      demNg++;
    }
  }
  cout <<"Cac phan tu la so nguyen trong mang: " << endl;
}
void timPhanTuThapPhan(int mang[],int size,int demTP){
for (int i=0; i<size; i++){
    if ((mang[i]*10)-((int)mang[i]*10)!=0); {
      demTP++;
    }
  }
}
int main()
{
  int size, demNg, demTP;
  while (true)
  {
    cout << "Nhap vao size:";
    cin >> size;
    if (size >0)
    {
      int mang[size];
      nhapMang(mang, size);
      cout << "Cac so duong trong mang: ";
      for (int i = 0; i < size; i++)
      {
        if (mang[i] > 0)
        {
          cout << mang[i] << endl;
          timPhanTuNguyen(mang,size,demNg);
          timPhanTuThapPhan(mang,size,demTP);
          break;
        }
        
        else
        {
          cout << "Nhap lai" << endl;
        }
      }
    }
  }
  return 0;
}

//((d*10)-((int)d*10)!=0)

