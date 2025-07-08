#include <bits/stdc++.h>

int main() {
    int n = 0, a = 0;
    std::cin >> n >> a;
    n -= n / 500 * 500;
    if (n <= a) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}