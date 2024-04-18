#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream ifile;
    int n = 0, a[256];
    ifile.open("Input.txt");
    if (ifile.fail()){
        cout <<"Loi mo file!";
        exit(1);
    }
    ifile >> (a[n]);
    while (!ifile.eof()){
        n++;
        ifile >> a[n];
    }
    ifile.close();
    cout <<"so luong phan tu cua mang la: "<<n<<endl;
    int sum = 0;
    cout <<"Cac gia tri luu trong file Input.txt la: ";
    for (int i=0; i<n; i++){
        cout <<a[i]<<" ";
        sum += a[i];
    }
    cout <<endl<<"Tong gia tri cac phan tu luu trong file la: "<<sum;
    int mi = a[0], ma = a[0];
    for (int i=1; i<n; i++){
        if (mi > a[i])
            mi = a[i];
        if (ma < a[i])
            ma = a[i];
    }
    cout <<endl<<"Gia tri phan tu nho nhat la: "<<mi
            <<", lon nhat la: "<<ma;
    //sap xep mang tang dan
    int tg;
    for (int i=0; i<n-1; i++)
        for (int j=i+1; j<n; j++)
        if (a[i]>a[j]){
           tg = a[i];
           a[i]=a[j];
           a[j]=tg;
        }
    cout <<endl<<"Mang sau khi sap xep la: ";
    for (int i=0; i<n; i++)
        cout <<a[i]<<" ";
    //Ghi du lieu mang da sap xep ra file Output.txt
    ofstream outfile;
    outfile.open("Output.txt");
    if (outfile.fail()){
        cout <<"Loi mo file!";
        exit(1);
    }
    for (int i=0; i<n; i++)
        outfile <<a[i]<<" ";
    return 0;
}
