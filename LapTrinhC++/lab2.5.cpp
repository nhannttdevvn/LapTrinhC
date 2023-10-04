#include <iostream> 
using namespace std;
int main()
{   int doF,doC,doK;
    cout << "Nhap do F: ";
    cin >> doF;
    int doC=((doF-32)*5)/9;
    int doK=(doC+273.15);
    cout << "=> Do C " << doC << endl;
    cout << "=> Do F " << doF << endl;
    return 0;
}