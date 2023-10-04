#include <iostream> 
using namespace std;
int main()
{   
    int nguoi1,nguoi2;
    cout << "Chieu cao nguoi 1: ";
    cin >> nguoi1;
    cout << "Chieu cao nguoi 2: ";
    cin >> nguoi2;
    float a=nguoi1/nguoi2;
    float b=nguoi2/nguoi1;
    cout << "Nguoi 2 cao gap " << a << "lan nguoi 1"<< endl;
    return 0;