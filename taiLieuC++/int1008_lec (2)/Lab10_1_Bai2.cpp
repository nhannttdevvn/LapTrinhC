#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int M, N;
    cout <<"Nhap vao kich thuoc ma tran M x N: "<<endl;
    cout <<"M = ";
    cin >>M;
    cout <<"N = ";
    cin >>N;
    int a[M][N];
    cout <<"Nhap vao gia tri cua ma tran "<<M<<"x"<<N<<endl;
    for (int i=0; i<M; i++)
    for (int j=0; j<N; j++){
        cout <<"a["<<i<<"]["<<j<<"] = ";
        cin >>a[i][j];
    }
    //Ghi du lieu mang mang 2 chieu ra file result.txt
    ofstream outfile;
    outfile.open("result.txt");
    if (outfile.fail()){
        cout <<"Loi mo file!";
        exit(1);
    }
    outfile <<M<<" "<<N<<endl;
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++)
            outfile <<a[i][j]<<" ";
        outfile<<endl;
    }
    outfile.close();
    return 0;
}
