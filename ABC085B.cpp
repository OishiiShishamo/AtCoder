#include <bits/stdc++.h>

int main() {
    int n = 0, tmp = 0;
    std::vector<int> d;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        d.emplace_back(tmp);
    }
    std::sort(d.begin(), d.end());
    d.erase(std::unique(d.begin(), d.end()), d.end());
    std::cout << d.size() << std::endl;
    return 0;
}