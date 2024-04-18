#include <iostream>
#include <cstring>
using namespace std;

int strcom( const char a[], const char b[]){
    int i;
    if (strlen(a)==strlen(b)){
        for (i=0; i<strlen(a)&& i<strlen(b); i++){
            if (a[i]!=b[i])
                return a[i]-b[i];
        }
        return 0;
    }
    else{
        for (i=0; i<strlen(a)&& i<strlen(b); i++){
            if (a[i]!=b[i])
                return a[i]-b[i];
        }
        return (strlen(a)<strlen(b)? b[i]: a[i]);
    }
}
int main(){
    char s1 [256], s2[256];
    cout <<"Hay nhap vao xau thu nha s1 = ";
    cin.getline(s1, 256);
    cout <<"Hay nhap vao xau thu nha s2 = ";
    cin.getline(s2, 256);
    if (strcom(s1, s2)==0)
        cout <<"Xau "<<s1<<" va xau "<<s2<<" co noi dung nhu nhau!";
    else{
        cout <<"Xau "<<s1<<" va xau "<<s2<<" co noi dung khac nhau la: "
        <<strcom(s1, s2)<<endl;
        cout <<"so sanh voi ham strcmp: "<<strcmp(s1, s2);
    }
    return 0;
}
