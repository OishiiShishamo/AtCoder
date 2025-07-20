#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0, x = 0;
    std::cin >> n;
    std::vector<int> a(n);
    for (auto& power : a) {
        std::cin >> power;
    }
    std::cin >> x;
    std::sort(a.begin(), a.end());
    if (std::binary_search(a.begin(), a.end(), x)) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}