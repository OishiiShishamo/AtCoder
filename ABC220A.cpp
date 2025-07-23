#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
using ll = long long;

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int a = 0, b = 0, c = 0;
    std::cin >> a >> b >> c;
    for (int i = 0; i <= b / c; i++) {
        if (a <= c * i) {
            std::cout << c * i << std::endl;
            return 0;
        }
    }
    std::cout << -1 << std::endl;
    return 0;
}