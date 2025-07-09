#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (a == 0) {
        std::cout << "Silver" << std::endl;
        return 0;
    }
    if (b == 0) {
        std::cout << "Gold" << std::endl;
        return 0;
    }
    std::cout << "Alloy" << std::endl;
    return 0;
}