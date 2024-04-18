#include <iostream>
using namespace std;
int main(){
  string s;
  cout <<"Hay nhap xau ki tu: ";
  getline(cin,s);
  int dem[256]={0};
  for (int i=0; i<s.length();i++){
    dem[s[i]]++;
  }
  for (int i = 0; i<256; i++){
    if (dem[i]>0){
      cout << "Ki tu xuat hien trong xau: " << char(i) << " lap lai: "<< dem[i]<<" lan."<< endl;
    }
  }

  for(int i=0;i<s.length();i++){
    s[i]=toupper(s[i]); 
    // int ascii=s[i];
    // if (ascii>=97 && ascii<=122){
    //   s[i]=ascii-32;
    // }
  }
  cout <<"Xau ki tu sau khi chuyen: "<<s<<endl;

  for( int i=0;i<s.length();i++){
    if(i==0 || s[i-1]==' '){ //ktra ki tu do co phai o dau chuoi khong.
      s[i]=toupper(s[i]); // viet hoa chu cai dau
    } else {
      s[i]= tolower(s[i]); // chuyen sang chu thuong.
    }
  }
  cout <<"Xau ki tu sau khi chuyen yc2: " <<s<<endl;  
  return 0;
}