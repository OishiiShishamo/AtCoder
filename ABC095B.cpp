#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
using ll = long long;

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    ll n = 0, x = 0, res = 0;
    std::cin >> n >> x;
    std::vector<ll> m(n);
    RANGE_CIN(m);
    {
        ll tmp = 0;
        for (const auto& x : m) {
            tmp += x;
        }
        x -= tmp;
        res += n;
    }
    std::sort(ALL(m));
    res += x / m.at(0);
    std::cout << res << std::endl;
    return 0;
}