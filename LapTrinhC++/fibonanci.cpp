
#include <iostream>
using namespace std;
int Fibonacci(int n)
{   
    if(n<1) return n;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main()
{
    int n;
    cout << "nhap n: ";
    cin >> n;
    cout << "So Fibonacci thu " << n << " la: " ;
    for (int i=0;i<n;i++){
      cout<<Fibonacci(i)<<" ";
    }
    return 0;
}

