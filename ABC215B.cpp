#include <bits/stdc++.h>

int main() {
    long long n = 0, a = 1;
    std::cin >> n;
    for (long long i = 0; i < 63; i++) {
        if (a > n) {
            std::cout << i - 1 << std::endl;
            break;
        }
        a *= 2;
    }
    return 0;
}