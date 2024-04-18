#include <iostream>
using namespace std;

void inSoNguyen(double a[], int n){
  cout <<"Phan tu nguyen cua mang: "<<endl;
  for (int i=0; i<n;i++){
    if (a[i]== floor(a[i])){
      cout << a[i] <<" " ;
    }
  }
}
void inTP(double a[], int n ){
  cout<<"Phan tu thap phan 3 cso la: ";
  for(int i=0;i<n; i++){
    if( a[i]*1000-(int)(a[i])*1000!=0){
      cout << a[i]<< " ";
    }
  }
}
void inChanLe(double a[],int n){
  cout<<"In phan tu chan :";
  for(int i=0;i<n;i++){
    if( a[i]*10-(int)(a[i])*10==0){
      if((int)a[i]%2==0){
      cout<< a[i];
    } }
  }
  cout<<"In phan tu le:";
  for(int i=0;i<n;i++){
    if( a[i]*10-(int)(a[i])*10==0){
      if(int(a[i])%2!=0){
      cout<< a[i];
    } }
  }
}
int main(){
  int n;
  cout <<"Nhap n>1: n=";
  cin >> n;
  while(n<1){
    cout<<"Nhap lai n=";
    cin >> n;
  }
  double a[n];
  for (int i=0; i<n; i++){
    cout << "Nhap phan tu thu " << i << " cua mang: ";
    cin >> a[i];
    while(a[i]<1 || a[i]>50){
      cout <<"nhap lai so thu " << i+1;
      cin >> a[i];
    }
  }
  inSoNguyen(a,n);
  inTP(a,n);
  return 0;
}