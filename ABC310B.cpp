#include <bits/stdc++.h>

int main() {
    int n = 0, m = 0;
    std::cin >> n >> m;
    std::vector<int> p(n), c(n);
    std::vector<std::vector<int>> f(n);
    for (int i = 0; i < n; i++) {
        std::cin >> p.at(i) >> c.at(i);
        std::vector<int> tmp(c.at(i));
        for (auto& x : tmp) {
            std::cin >> x;
        }
        f.at(i) = tmp;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (c.at(i) > c.at(j)) continue;
            if (p.at(i) < p.at(j)) continue;
            std::vector<int> tmp1 = f.at(j), tmp2 = f.at(i);
            std::sort(tmp1.begin(), tmp1.end());
            std::sort(tmp2.begin(), tmp2.end());
            if (c.at(i) == c.at(j)) {
                if (p.at(i) > p.at(j)) {
                    if (std::includes(tmp1.begin(), tmp1.end(), tmp2.begin(), tmp2.end()) == 0) continue;
                    std::cout << "Yes" << std::endl;
                    return 0;
                }
                else {
                    continue;
                }
            }
            else {
                if (std::includes(tmp1.begin(), tmp1.end(), tmp2.begin(), tmp2.end()) == 0) continue;
                if (tmp1.size() > tmp2.size()) {
                    std::cout << "Yes" << std::endl;
                    return 0;
                }
            }
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}