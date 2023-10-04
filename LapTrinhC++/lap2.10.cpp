#include <iostream> 
using namespace std;

int main() {
    double soThuc;
    int n;
    cout << "Nhap so thuc: ";
    cin >> soThuc;
    cout << "Nhập so thap phan muon lam tron sau dau phay: ";
    cin >> n;
    double heSoLamTron = std::pow(10, n)
    double soLamTron = std::round(soThuc * heSoLamTron) / heSoLamTron;
    std::cout << "So sau khi lam tron: " << soLamTron ;
    return 0;
}