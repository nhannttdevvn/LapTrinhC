#include <iostream>
using namespace std;
void sapXep(int n, int a[]){
  for(int i=0;i<n;i++){
    for (int j=i+1;j<n;j++){
    if(a[i]%2 !=0 && a[j] %2 == 0){
      int tmp= a[j];
      a[j]=a[i];
      a[i]=tmp;
    }}
  }
  cout<<"Day so sau sx: ";
  for (int i=0;i<n;i++){
    cout<< a[i]<<" ";
  }
}
void thayThe(int n, int a[]){
  cout<< "mang sau la:";
  int i;
  for(i=0; i<n; i++){
    if(n%2==0){
      int truoc=n/2-1, sau=n/2;
      a[truoc]=0;
      a[sau]=0;
    } else {
      int giua= (int)(n/2);
      a[giua]=0;
    }
  }
  for (i=0;i<n;i++){
     cout << a[i] <<" ";
  }
}
int main(){
  int n;
  cout<<"Nhap vao so nguyen n=: ";
  cin >> n;
  while(n<0){
    cout<<"Nhap lai n=";
    cin>>n;
  }
  int a[n];
  for(int i=0; i<n;i++){
    cout<<"Nhap phan tu thu " << i << " cua mang: ";
    cin>> a[i];
  }
  //sapXep(n,a);
  thayThe(n,a)
;  return 0;
}