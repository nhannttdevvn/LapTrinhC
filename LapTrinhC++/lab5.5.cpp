#include <iostream>
#include <cmath>
using namespace std;

double dmod(double soBiChia, double soChia) {
    return fmod(soBiChia, soChia);
}
int main() {
    double num1, num2;
    cout << "Nhap so chia ";
    cin >> num1;
    cout << "Nhap so bi chia ";
    cin >> num2;
    double ketQua = dmod(num1, num2);
    cout << "Phan du: " << num1 << " % " << num2 << " = " << ketQua << endl;
    return 0;
}
