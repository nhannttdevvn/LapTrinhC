#include <iostream>
using namespace std;

// Hàm tính ước chung lớn nhất (GCD) sử dụng thuật toán Euclid
int timUCLN(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Hàm tính bội chung nhỏ nhất (LCM)
int timBCNN(int a, int b)
{
    return (a * b) / timUCLN(a, b);
}

// Hàm kiểm tra xem hai số có nguyên tố cùng nhau hay không
bool coNguyenToCungNhau(int a, int b)
{
    return timUCLN(a, b) == 1;
}

int main()
{
    int num1, num2;
    cout << "Nhập số nguyên dương thứ nhất: ";
    cin >> num1;
    cout << "Nhập số nguyên dương thứ hai: ";
    cin >> num2;

    // Kiểm tra nếu hai số không phải là số nguyên dương
    if (num1 <= 0 || num2 <= 0)
    {
        cout << "Vui lòng nhập số nguyên dương." << endl;
        return 1; // Kết thúc chương trình với lỗi
    }

    // In các ước số chung của hai số
    cout << "Các ước số chung của " << num1 << " và " << num2 << ": ";
    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    // Tính ước chung lớn nhất (GCD)
    int ucln = timUCLN(num1, num2);
    cout << "Ước chung lớn nhất (GCD) của " << num1 << " và " << num2 << " là: " << ucln << endl;

    // Tính bội chung nhỏ nhất (LCM)
    int bcnn = timBCNN(num1, num2);
    cout << "Bội chung nhỏ nhất (LCM) của " << num1 << " và " << num2 << " là: " << bcnn << endl;

    // Kiểm tra xem hai số có nguyên tố cùng nhau hay không
    if (coNguyenToCungNhau(num1, num2))
    {
        cout << num1 << " và " << num2 << " là hai số nguyên tố cùng nhau." << endl;
    }
    else
    {
        cout << num1 << " và " << num2 << " không phải là hai số nguyên tố cùng nhau." << endl;
    }

    return 0;
}
