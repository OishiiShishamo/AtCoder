#include <bits/stdc++.h>

int main() {
    long long h = 0, w = 0, n = 0, tmp1 = 0, tmp2 = 0;
    std::cin >> h >> w >> n;
    std::vector<long long> a, b, s_a, s_b, res_a, res_b;
    for (long long i = 0; i < n; i++) {
        std::cin >> tmp1 >> tmp2;
        a.emplace_back(tmp1);
        b.emplace_back(tmp2);
    }
    s_a = a;
    s_b = b;
    std::sort(s_a.begin(), s_a.end());
    std::sort(s_b.begin(), s_b.end());
    s_a.erase(std::unique(s_a.begin(), s_a.end()), s_a.end());
    s_b.erase(std::unique(s_b.begin(), s_b.end()), s_b.end());
    for (int i = 0; i < (int)a.size(); i++) {
        res_a.emplace_back(std::lower_bound(s_a.begin(), s_a.end(), a.at(i)) - s_a.begin());
    }
    for (int i = 0; i < (int)b.size(); i++) {
        res_b.emplace_back(std::lower_bound(s_b.begin(), s_b.end(), b.at(i)) - s_b.begin());
    }
    
    for (long long i = 0; i < n; i++) {
        std::cout << res_a.at(i) + 1 << " " << res_b.at(i) + 1 << std::endl;
    }
    return 0;
}