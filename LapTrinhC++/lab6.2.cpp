#include <iostream>
using namespace std;

void nhapMang(int value[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cin >> value[i];
  }
}

void inMang(int value[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << value[i] << endl;
  }
}

void tongChan(int value[], int size)
{
  int sum = 0;
  for (int i = 0; i < size; i++)
  {
    if (value[i] % 2 == 0)
    {
      sum += value[i];
    }
  }
  cout << "Tong cac phan tu chan la: " << sum << endl;
}

void soLuongLe(int value[], int size)
{
  int soLuongLe = 0;
  for (int i = 0; i < size; i++)
  {
    if (value[i] % 2 == 1)
    {
      soLuongLe++;
    }
  }
  cout << "So luong phan tu le la: " << soLuongLe << endl;
}

void phanTuLap(int value[], int size, int mangLap[], int &sizeLap)
{
  sizeLap = 0;
  for (int i = 0; i < size; i++)
  {
    bool isDuplicate = false;

    for (int j = 0; j < sizeLap; j++)
    {
      if (value[i] == mangLap[j])
      {
        isDuplicate = true;
        break;
      }
    }

    if (!isDuplicate)
    {
      for (int j = i + 1; j < size; j++)
      {
        if (value[i] == value[j])
        {
          mangLap[sizeLap] = value[i];
          sizeLap++;
          break;
        }
      }
    }
  }
}

void dayDaoNguoc(int value[], int size)
{
  cout << "Day nguoc lai: ";
  for (int i = size - 1; i >= 0; i--)
  {
    cout << value[i] << " ";
  }
  cout << endl;
}

void dayDaoChanLe(int value[], int size, int mangChan[], int &sizeChan, int mangLe[], int &sizeLe)
{
  sizeChan = 0;
  sizeLe = 0;
  for (int i = 0; i < size; i++)
  {
    if (value[i] % 2 == 0)
    {
      mangChan[sizeChan] = value[i];
      sizeChan++;
    }
    else
    {
      mangLe[sizeLe] = value[i];
      sizeLe++;
    }
  }
}

void dayChanLe(int mangLe[], int sizeLe, int mangChan[], int sizeChan, int mangChanLe[], int &sizeChanLe)
{
  sizeChanLe = 0;
  for (int i = 0; i < sizeChan; i++)
  {
    mangChanLe[sizeChanLe] = mangChan[i];
    sizeChanLe++;
  }
  for (int i = 0; i < sizeLe; i++)
  {
    mangChanLe[sizeChanLe] = mangLe[i];
    sizeChanLe++;
  }
}

int main()
{
  int size, sizeLap, sizeChan, sizeChanLe;
  int sizeLe;

  cout << "Nhap kich thuoc mang: ";
  cin >> size;
  int value[size];
  int mangLap[size];
  int mangLe[size], mangChanLe[size], mangChan[size];
  nhapMang(value, size);
  inMang(value, size);
  tongChan(value, size);
  soLuongLe(value, size);
  phanTuLap(value, size, mangLap, sizeLap);
  if (sizeLap == 0)
  {
    cout << "Khong co phan tu lap." << endl;
  }
  else
  {
    cout << "Phan tu lap la: ";
    inMang(mangLap, sizeLap);
  }

  dayDaoNguoc(value, size);
  dayDaoChanLe(value, size, mangChan, sizeChan, mangLe, sizeLe);
  cout << "Cac phan tu sau khi dao la: ";
  dayChanLe(mangLe, sizeLe, mangChan, sizeChan, mangChanLe, sizeChanLe);
  inMang(mangChanLe, sizeChanLe);
  return 0;
}
