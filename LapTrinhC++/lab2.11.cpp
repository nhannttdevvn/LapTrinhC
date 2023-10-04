#include <iostream>
#include <math.h>
#include <iomanip>
using  namespace std;
int main()
{
    double a,b,c,d,e;
    // a la khoan vay ban dau//
    // b la lai suat vay tieu dung//
    //c la thoi gian vay//
    // d la khoan tra gop hang thang//
    cout<< " nhap lan luot so vay ban dau, lai suat vay va thoi gian vay"<<endl;
    cin>>a>>b>>c;
    d=a/c;
    e=a-(((a*b/100)/12)*18);
    cout<< " khoan tien tra gop hang thang la: "<<fixed<<setprecision(2)<<d<<endl;
    cout<< " so tien nguoi vay tieu dung la :"<< fixed<< setprecision(2)<<e<<endl;
    return 0;

}