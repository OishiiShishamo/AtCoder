#include <bits/stdc++.h>

int main() {
    int n = 0, m = 0, default_price = 0, a = 0;
    int tmpi = 0;
    std::string tmps = "";
    std::vector<std::string> c;
    std::vector<std::string> d;
    std::vector<int> p;
    std::unordered_map<std::string, int> table;
    std::cin >> n >> m;
    for (int i = 0; i < n; i++) {
        std::cin >> tmps;
        c.emplace_back(tmps);
    }
    for (int i = 0; i < m; i++) {
        std::cin >> tmps;
        d.emplace_back(tmps);
    }
    std::cin >> default_price;
    for (int i = 0; i < m; i++) {
        std::cin >> tmpi;
        p.emplace_back(tmpi);
    }
    for (int i = 0; i < m; i++) {
        table[d.at(i)] = p.at(i);
    }
    for (const auto& x : c) {
        try {
            tmpi = table.at(x);
        } catch (const std::out_of_range& e) {
            tmpi = default_price;
        }
        a += tmpi;
    }
    std::cout << a << std::endl;
    return 0;
}