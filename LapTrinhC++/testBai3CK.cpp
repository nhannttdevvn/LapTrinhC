#include <iostream>
using namespace std;

int main(){
  string s;
  cout<<"Nhap xau s: ";
  getline(cin,s);
  cout<<"Ki tu xuat hien: ";
  int dem[256]={0};
  for (int i=0;i<s.length();i++){
    dem[s[i]]++;
  }
  for(int i=0;i<256;i++){
    if(dem[i]>0){
      cout<<char(i)<< " ";
    }
  }
  cout<< endl;
  for(int i=0;i<s.length();i++){
    s[i]=toupper(s[i]);
  }
  cout<<"xau sau khi chuyen: "<<s<<endl;
  for(int i=0;i<s.length();i++){
    if(i==0|| s[i-1]==' '){
      s[i]=toupper(s[i]);
    } else 
    s[i]=tolower(s[i]);
  }
  cout<<"xau sau la: "<<s<<endl;
  return 0;
}