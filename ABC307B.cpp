#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::string tmp = "";
    std::string tmpr = "";
    std::cin >> n;
    std::vector<std::string> s(n);
    for (auto& x : s) {
        std::cin >> x;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            tmp = s.at(i) + s.at(j);
            tmpr = tmp;
            std::reverse(tmpr.begin(), tmpr.end());
            if (tmp == tmpr) {
                std::cout << "Yes" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "No" << std::endl;
    return 0;
}