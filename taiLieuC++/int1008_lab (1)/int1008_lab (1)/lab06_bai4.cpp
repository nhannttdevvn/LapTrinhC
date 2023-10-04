#include <iostream>
using namespace std;
int main()
{
    int n;
    int a [100][100];
    cout << "Ban nhap vao tam giac Pascal bac N = ";
    cin >> n;
    //Khoi tao dong so 1
    for (int i = 0; i<n; i++)
        a[0][i] = 0;
    a[0][0] = 1;
    //Khoi tao cac dong tu so 2 --> n
    for (int i =1; i<n; i++){
        a[i][0] =1;
        for (int j = 1; j< n; j++){
            a[i][j] = a[i-1][j]+a[i-1][j-1];
        }
    }
    // In ra ket qua tam giac Pascal bac N
    for (int i=0; i<n; i++){
        for (int j = 0; j<n; j++){
            if (a[i][j] >0)
                cout << a[i][j]<< " ";
            else
                cout << " ";
        }
        cout <<endl;
    }
	return 0;
}

