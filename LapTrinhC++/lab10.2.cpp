#include <iostream>
#include <fstream>
using namespace std;
int main(){
 ifstream inStream;
 ofstream outStream;
 inStream.open("infile.txt");
 outStream.open("outfile.txt");
 int so1,so2,so3;
 inStream>>so1>>so2>>so3;
 outStream<<"Tong 3 so dau la: "<< (so1+so2+so3) <<endl;
 inStream.close();
 outStream.close();
 return 0;
} 