#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0;
    std::cin >> n;
    std::vector<int> h(n);
    std::vector<int> dp(n, INT_MAX);
    for (auto& x : h) {
        std::cin >> x;
    }
    dp.at(0) = 0;
    for (int i = 1; i < n; i++) {
        if (i != 1) {
            if (dp.at(i) > dp.at(i - 2) + std::abs(h.at(i - 2) - h.at(i))) {
                dp.at(i) = dp.at(i - 2) + std::abs(h.at(i - 2) - h.at(i));
            }
        }
        if (dp.at(i) > dp.at(i - 1) + std::abs(h.at(i - 1) - h.at(i))) {
            dp.at(i) = dp.at(i - 1) + std::abs(h.at(i - 1) - h.at(i));
        }
    }
    std::cout << dp.at(n - 1) << std::endl;
    return 0;
}