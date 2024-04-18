#include <iostream>
using namespace std;
bool songuyento(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    if (n % 2 == 0)
    {
        return false;
    }

    for (int i = 3; i * i <= n; i++)
        {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}


void kiemtrauocso(int n)
 {
     cout << "cac uoc so la so nguyen to cua " << n << " la: " ;

    for (int i = 1; i <= n; i++)
        {
        if (n % i == 0)
         {
            if (songuyento(i))
            {
                cout << i << " ";
            }
        }
    }
}

int main ()
{   int ketqua=1;
    int n;
    cout << " nhap so nguyen n: " ;
    cin >> n;
    while (n<0)
    {
        cout << " nhap loi , hay nhap lai ";
        cin >> n;
    }
    for (int i=1 ; i<=n ; i++)
    {
      ketqua = ketqua *i;
    }
    cout << " n! = " << ketqua << endl;
    kiemtrauocso(n);
    return 0;
}
