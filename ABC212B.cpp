#include <bits/stdc++.h>

int main() {
    std::string x = "";
    std::array<int, 4> digits;
    std::cin >> x;
    int tmp = -1;
    for (int i = 0; i < 4; i++) {
        digits.at(i) = x.at(i) - 48;  // ASCII上の数字をint型に変換している.
        if (tmp == -1) {
            tmp = digits.at(i);
            continue;
        }
        if (tmp != digits.at(i)) tmp = 10;
    }
    if (tmp != 10) {
        std::cout << "Weak" << std::endl;
        return 0;
    }
    tmp = digits.at(0);
    for (int i = 1; i < 4; i++) {
        if (digits.at(i) != (tmp + 1) % 10) {
            std::cout << "Strong" << std::endl;
            return 0;
        }
        tmp = digits.at(i);
    }
    std::cout << "Weak" << std::endl;
    return 0;
}