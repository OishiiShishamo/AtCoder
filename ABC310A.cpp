#include <bits/stdc++.h>

int main() {
    int n = 0, p = 0, q = 0;
    std::cin >> n >> p >> q;
    std::vector<int> d(n);
    for (auto& x : d) {
        std::cin >> x;
    }
    std::sort(d.begin(), d.end());
    if (q + d.at(0) < p) {
        std::cout << q + d.at(0) << std::endl;
    }
    else {
        std::cout << p << std::endl;
    }
    return 0;
}