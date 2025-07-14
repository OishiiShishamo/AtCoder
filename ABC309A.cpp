#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a == b - 1) {
        if ((b - 1) % 3 == 0) {
            std::cout << "No" << std::endl;
            return 0;
        }
        std::cout << "Yes" << std::endl;
        return 0;
    }
    std::cout << "No" << std::endl;
    return 0;
}