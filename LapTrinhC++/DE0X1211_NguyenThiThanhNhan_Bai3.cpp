#include <iostream>
using namespace std;
void checkTrungLap(int n, int a[],int x){
  for(int i=0;i<n;i++){
    if(a[i]==x){
      cout<<"Phan tu thu "<<i+1<< " giong phan tu x."<< endl;
    }
  }
}
int main(){
  int n;
  cout<<"Nhap n lon hon hoac bang 1: n=";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cout<<"Nhap phan tu thu "<< i+1 << " cua mang: ";
    cin>>a[i];
  }
  while(n<1){
    cout<<"Nhap lai n=";
    cin>>n;
  }
  int x;
  cout<<"Nhap x lon hon 0: x=";
  cin>>x;
  while(x<0){
    cout<<"Nhap lai x=";
    cin>>x;
  }
  checkTrungLap(n,a,x);
  return 0;
}