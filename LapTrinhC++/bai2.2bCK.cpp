#include <iostream>
using namespace std;
void KTBS(int n){
  cout<<"Cac so tm la: ";
  for (int i = 0; i < n; i++){
  if (i%5==0 && i%10!=0){
    cout<< i <<" ";
  }
  }
}
int main(){
  int n;
  cout<<"Nhap n>=1: n= ";
  cin>> n;
  while(n<1){
    cout<<"Nhap lai n=";
    cin>>n;
  }
  KTBS(n);
  }