#include <iostream>
using namespace std;
void tinhGT(int n){
  int gt=1;
  cout<<"Tinh gt=";
  for (int i=0;i<n;i++){
    gt=gt*(n-i);
  }
  cout<<gt;
}

bool ktnt(int n){
  if (n<2) return false;
  for (int i=2;i<sqrt(n);i++){
    if(n%i==0) return false;
  }
  return true;
}
void ktUoc(int n){
  bool coUoc =false;
  cout<<"Cac uoc la so ngto: ";
  for (int i=2;i<n;i++){
    if (n%i==0 && ktnt(i)){
      cout<< i << " ";
      coUoc=true;
    }
  }
  if (!coUoc) cout<<"Khong co uoc nao.";
}
int main(){
  int n;
  cout<<"nhap n>1: n=" ;
  cin>>n;
  while(n<1){
    cout<<"Nhap lai n=";
    cin>>n;
  }
  tinhGT(n);
  cout<<endl;
  ktUoc(n);
  return 0;
}