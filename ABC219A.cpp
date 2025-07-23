#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
using ll = long long;

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int x = 0;
    std::cin >> x;
    if (x < 40) {
        std::cout << 40 - x << std::endl;
        return 0;
    }
    if (x < 70) {
        std::cout << 70 - x << std::endl;
        return 0;
    }
    if (x < 90) {
        std::cout << 90 - x << std::endl;
        return 0;
    }
    std::cout << "expert" << std::endl;
    return 0;
}