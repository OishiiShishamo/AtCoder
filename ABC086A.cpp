#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0;
    std::cin >> a >> b;

    if (a * b % 2 == 0) {
        std::cout << "Even" << std::endl;
    }
    else {
        std::cout << "Odd" << std::endl;
    }
    return 0;
}