#include <bits/stdc++.h>

int main() {
    int n = 0, tmp = 0;
    std::vector<int> a, b;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        a.emplace_back(tmp);
    }
    b = a;
    std::sort(a.begin(), a.end(), std::greater<int> {});
    for (int i = 0; i < n; i++) {
        if (b.at(i) == a.at(1)) {
            std::cout << i + 1 << std::endl;
        }
    }
    return 0;
}