#include <bits/stdc++.h>

int main() {
    int n = 0, l = 0, r = 0;
    std::vector<int> v;
    std::cin >> n >> l >> r;
    for (int i = 1; i <= n; i++) {
        v.emplace_back(i);
    }
    std::reverse(v.begin() + l - 1, v.begin() + r);
    for (int i = 0; i < n - 1; i++) {
        std::cout << v.at(i) << " ";
    }
    std::cout << v.back() << std::endl;
    return 0;
}