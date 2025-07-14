#include <bits/stdc++.h>

int main() {
    int n = 0, a = 0;
    std::cin >> n;
    std::vector<int> l(n);
    for (auto& x : l) {
        std::cin >> x;
    }
    std::sort(l.begin(), l.end());
    for (int i = 0; i < n - 1; i++) {
        a += l.at(i);
    }
    if (l.back() < a) {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}