#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
using ll = long long;

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0, aaaa = 0, hoge = 0;
    std::cin >> n;
    std::vector<ll> s(n), t(n), dp(n, LONG_LONG_MAX);
    RANGE_CIN(s);
    RANGE_CIN(t);
    dp = t;
    hoge = *std::min_element(ALL(t));
    for (int i = 0; i < n; i++) {
        if (t.at(i) == hoge) {
            aaaa = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        int power = (i + aaaa) % n;
        if (dp.at((power + 1) % n) > dp.at(power) + s.at(power)) dp.at((power + 1) % n) = dp.at(power) + s.at(power);
    }
    for (const auto& x : dp) {
        std::cout << x << std::endl;
    }
    return 0;
}