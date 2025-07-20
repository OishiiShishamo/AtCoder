#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    long long n = 0, count = 0;
    std::cin >> n;
    std::vector<int> a(n), b(n), c(n), aaaa(n);
    for (auto& x : a) {
        std::cin >> x;
        x -= 1;
    }
    for (auto& x : b) {
        std::cin >> x;
        x -= 1;
    }
    for (auto& x : c) {
        std::cin >> x;
        x -= 1;
    }
    for (int i = 0; i < n; i++) {
        aaaa.at(b.at(c.at(i))) += 1;
    }
    for (int i = 0; i < n; i++) {
        count += aaaa.at(a.at(i));
    }
    std::cout << count << std::endl;
    return 0;
}