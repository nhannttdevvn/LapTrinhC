#include <iostream>
using namespace std;

void demphantu( int n, double a[])
{
  int dem=0;
  for (int i=0 ; i<n ; i++)
  {
      dem++;
  }
  cout << "so luong phan tu trong mang la " << dem<<endl;
}
void inphantutrongmang(int n , double a[] )
{
    cout << "danh sach cac phan tu trong mang " ;
  for ( int i=0 ; i<n ; i++)
  {
      cout << a[i] << " " ;

  }
}

void inphantuthapphan( int n,double a[])
{   cout<< "danh sach cac phan tu co phan thap phan tu 2 chu so tro len la " ;
    int dem=0;
    for (int i=0; i<n ; i++)
    {
   if ( a[i]*10- (int)(a[i]*10)!= 0 )
   {
       dem++;
       cout << a[i] << " " ;

   }
}
cout <<endl;
cout << "so luong phan tu co phan thap phan tu 2 chu so tro len " <<dem<<endl;
}

void inphantunguyn( int n,double a[])
{   cout<< "danh sach cac phan tu nguyn la " ;
    int dem=0;
    for (int i=0; i<n ; i++)
    {
   if ( a[i] - (int)(a[i])== 0 )
   {
       dem++;
       cout << a[i] << " " ;

   }
}
cout <<endl;
cout << "so luong phan tu nguyn " <<dem<<endl;
}
int main()
{
    int n;
    cout << "nhap so luong phan tu trong mang " ;
    cin >> n;
    while (n<0)
    {
        cout << " nhap loi, yeu cau nhap lai ";
        cin>>n;
    }
    double a[n];

    for( int i=0; i<n ; i++)
    {
        cout << "phan tu thu " << i+1 << " cua mang la " ;
        cin >> a[i] ;
        while (a[i]<0||a[i]>100)
        {
            cout << " nhap loi , hay nhap lai ";
            cin >> a[i];
        }
    }
    demphantu(n,a);

    inphantutrongmang(n,a);
    cout<<endl;
    inphantuthapphan(n,a);
    cout<<endl;
    inphantunguyn(n,a);
    return 0;
}