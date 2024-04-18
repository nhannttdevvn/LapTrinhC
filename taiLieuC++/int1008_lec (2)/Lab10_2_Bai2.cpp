#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char s[256];
    int c[33]={0};
    char kytu[33];
    int i;
    cout <<"Hay nhap vao xau ky tu s = ";
    cin.getline(s, 256);
    for (i=0; i< strlen(s); i++){
        if (s[i]==' ')
            c[s[i]]++;
        if (s[i]<97)
            c[s[i]-65]++;
        if (s[i]>=97)
            c[s[i]-97]++;
    }
    for (i=0; i<32; i++){
        kytu[i] = (char)(i+65);
        if (c[i]>0)
            cout <<"Ki tu "<<kytu[i]<<" xuat hien "
            <<c[i]<<" lan"<<endl;
    }
    kytu[32] = ' ';
    if (c[32]>0)
    cout <<"Ki tu \"Cach\""<<" xuat hien "
    <<c[i]<<" lan"<<endl;

    //sap xep tang dan theo so lan xuat hien cua ky tu.
    int tg;
    char tmp;
    for (i = 0; i<32; i++)
        for (int j= i+1; j<33; j++)
            if (c[i]>0 && c[j]>0 && c[i]>c[j]){
                tg = c[i];
                c[i] = c[j];
                c[j] = tg;
                tmp = kytu[i];
                kytu[i] = kytu[j];
                kytu[j] = tmp;
            }
    cout <<"Theo thu tu sap xep tang dan so lan xuat hien: "<<endl;
    for (i=0; i<33; i++){
        if (c[i]>0)
            cout <<"Ki tu "<<kytu[i]<<" xuat hien "
            <<c[i]<<" lan"<<endl;
    }

    return 0;
}
