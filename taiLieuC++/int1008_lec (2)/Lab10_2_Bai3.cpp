//Chuan hoa xau ky tu
#include <iostream>
#include <cstring>
using namespace std;

//ham loai bo cac ky tu cach tu dau va cuoi xau
void c_trim(char xau[]){
    int s=0;
    int le = strlen(xau);
    //cout <<"le:"<<le<<endl;
    int e = le-1;
    while (xau[s]== ' ')
        s++;
    while (xau[e] == ' ')
        e--;
    if (s>0){
        for (int i=0; i<e; i++){
            xau[i] = xau[i+s];
        }
    }
    if (e<le)
        xau[e-s+1]='\0';
}

//ham dua ky tu dau cua tu phai viet hoa va ky tu sau do viet thuong
void up_lo_case(char xau []){
    bool f_letter = true;
    for (int i=0; i<strlen(xau); i++){
        if (f_letter){
            if (xau[i]>=97)
                xau[i] = xau[i]-32;
            f_letter = false;
        }
        else if (!f_letter && xau [i]<97 && xau[i]>=65){
            xau[i] = xau[i]+32;
        }
        if (xau[i]==' ')
            f_letter = true;
    }
}

//ham loai bo cac ky tu cach giua 2 tu khi co nhieu hon 1 ky tu
void rm_space (char xau [], char xau_ch[]){
    int le = strlen(xau);
    int j = 0;
    for (int i=0; i<le; i++){
        if (xau[i]!=' '){
            xau_ch[j] = xau[i];
            j++;
        }
        else{
            if (xau[i-1]!=' '){
                xau_ch[j] = xau[i];
                j++;
            }
        }
    }
    xau_ch[j] = '\0';
}
int main(){
    char s[256], chuanhoa[256];
    cout <<"Hay nhap vao xau ky tu s = ";
    cin.getline(s, 256);
    c_trim(s);
    cout <<"Xau sau khi loai bo ky tu cach o dau va cuoi:"<<s<<endl;
    rm_space(s, chuanhoa);
    cout <<"Xau sau khi loai bo ky tu cach du thua giua 2 tu:"<<chuanhoa<<endl;
    up_lo_case(chuanhoa);
    cout <<"Xau sau khi chuan hoa toan bo nhu sau:"<<chuanhoa<<endl;
    return 0;
}
