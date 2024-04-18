#include <iostream>
using namespace std;
int main(){
int i = 10, j = 20, k;
int *p = &i;
int *q = &j;
*p = *p + 1;
p = &k;
*p = *q;
p = q;
*p = i;
cout << "Gia tri cua bien i: " << *p << endl;
}