#include <iostream>
using namespace std;
void sort_numbers_ascending(int number[], int count)
{
   int temp, i, j, k;
   for (j = 0; j < count; ++j)
   {
      for (k = j + 1; k < count; ++k)
      {
         if (number[j] > number[k])
         {
            temp = number[j];
            number[j] = number[k];
            number[k] = temp;
         }
      }
   }
   cout<<"Các số sau khi được sắp xếp tăng dần:\n";
   for (i = 0; i < count; ++i)
      cout<<"\n"<< number[i];
}
int main()
{
   int i, count, number[20];
  
   cout<<"Nhập số lương phần tử trong mảng:";
   cin>>count;
   cout<<"\nNhập giá trị cho từng phần tử trong mảng:\n";
    
   for (i = 0; i < count; ++i)
      cin>>number[i];
  
   sort_numbers_ascending(number, count);
}