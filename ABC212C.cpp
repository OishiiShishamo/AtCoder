#include <bits/stdc++.h>

int main() {
    int n = 0, m = 0, out = 2147483647, tmp = 0;
    std::cin >> n >> m;
    std::vector<int> a, b;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        a.emplace_back(tmp);
    }
    for (int i = 0; i < m; i++) {
        std::cin >> tmp;
        b.emplace_back(tmp);
    }
    std::sort(b.begin(), b.end());
    for (const auto& x : a) {
        auto it = std::lower_bound(b.begin(), b.end(), x);
        if (it != b.end()) out = std::min(out, std::abs(x - *it));
        if (it != b.begin()) out = std::min(out, std::abs(x - *std::prev(it)));
    }
    std::cout << out << std::endl;;
    return 0;
}