#include <iostream>
#include <cctype> // Để sử dụng hàm std::isalpha

int main() {
    char ch;

    // Yêu cầu người dùng nhập vào một ký tự (kiểu char)
    std::cout << "Nhập vào một ký tự: ";
    std::cin >> ch;

    // a. Kiểm tra xem ký tự nhập vào có là Letter hay không (ký tự từ 'a' đến 'z')?
    if (std::isalpha(ch)) {
        // b. Nếu là Letter thì kiểm tra xem ký tự là viết hoa hay viết thường và thông báo kết quả kiểm tra ra màn hình
        if (std::isupper(ch)) {
            std::cout << "Ký tự nhập vào là viết hoa." << std::endl;
        } else {
            std::cout << "Ký tự nhập vào là viết thường." << std::endl;
        }

        // c. Nếu ký tự trên là viết hoa thì chuyển sang dạng viết thường của nó, nếu là ký tự viết thường thì chuyển sang dạng viết hoa của nó. Sau đó in kết quả tương ứng ra màn hình.
        if (std::isupper(ch)) {
            ch = std::tolower(ch);
        } else {
            ch = std::toupper(ch);
        }
        std::cout << "Kết quả sau khi chuyển đổi: " << ch << std::endl;
    } else {
        std::cout << "Ký tự nhập vào không phải là một Letter." << std::endl;
    }

    return 0;
}
