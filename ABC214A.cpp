#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::cin >> n;
    if (n <= 125) {
        std::cout << 4 << std::endl;
    }
    else if (n <= 211) {
        std::cout << 6 << std::endl;
    }
    else {
        std::cout << 8 << std::endl;
    }
    return 0;
}