#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0, k = 0;
    std::cin >> n >> k;
    std::vector<int> h(n);
    std::vector<int> dp(n, INT_MAX);
    for (auto& x : h) {
        std::cin >> x;
    }
    dp.at(0) = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= std::min(k, i); j++) {
            if (dp.at(i) > dp.at(i - j) + std::abs(h.at(i - j) - h.at(i))) {
                dp.at(i) = dp.at(i - j) + std::abs(h.at(i - j) - h.at(i));
            }
        }
    }
    std::cout << dp.at(n - 1) << std::endl;
    return 0;
}