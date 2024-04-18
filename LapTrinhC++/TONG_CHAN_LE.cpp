#include <iostream>
using namespace std;
void tongChan(int n){
  int tongChan=0;
  for (int i=0; i<n;i++){
    if(i%2==0){
    tongChan=tongChan+i;
    }
  }
  cout<<"Tong chan:" << tongChan<< endl;
}
void tongLe(int n){
  int tongLe=0;
  for (int i=0; i<n;i++){
    if(i%2!=0){
    tongLe=tongLe+i;
    }
  }
  cout<<"Tong le:" << tongLe;
}
int main(){
  int n;
  cout<<"Nhap n>=1: n= ";
  cin>> n;
  while(n<1){
    cout<<"Nhap lai n=";
    cin>>n;
  }
tongChan(n);
tongLe(n);
return 0;
}