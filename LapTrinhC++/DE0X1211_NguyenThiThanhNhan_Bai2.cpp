#include <iostream>
using namespace std;
void tinhGT(int n){
  int gt=1;
  for(int i=0;i<n;i++){
    gt=gt*(n-i);
  }
  cout<<"n!="<<gt<<endl;
}
int main(){
  int n;
  cout<<"Nhap vao so nguyen n>1: n= ";
  cin>>n;
  while(n<1){
    cout<<"Nhap sai, vui long nhap lai n=";
    cin>>n;
  }
  tinhGT(n);
  return 0;
}