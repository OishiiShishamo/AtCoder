#include <bits/stdc++.h>

using ll = long long;
using vll = std::vector<ll>;
using vvll = std::vector<vll>;
using vd = std::vector<double>;
using vvd = std::vector<vd>;

#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
#define CHMAX(x,y) x = std::max(x,y)
#define CHMIN(x,y) x = std::min(x,y)
#define UNIQUE_ERASE(v) v.erase(std::unique(ALL(v)), v.end());
#define F_DIG_NUM(a) std::fixed << std::setprecision(a)
#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define REPR(i,n) for(ll i = (ll)(n); i >= 0; i--)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)
#define EB(x) emplace_back(x)
#define EM(x) emplace(x)
#define PSORT(v, fs) std::sort(ALL(v), [](const auto& a, const auto& b) { return a.fs < b.fs; })
#define PRSORT(v, fs) std::sort(RALL(v), [](const auto& a, const auto& b) { return a.fs < b.fs; })

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    ll n = 0, q = 0, i = 0, power = 0, size = 0;
    std::cin >> n >> q;
    vll a(n), b(q);
    RANGE_CIN(a);
    RANGE_CIN(b);
    std::sort(ALL(a));
    size = a.size();
    for (const auto& x : b) {
        if (x > a.back()) std::cout << -1 << std::endl;
        else if (x <= a.at(0)) {
            std::cout << n * (x - 1) + 1 << std::endl;
        }
        else {
            i = 0, power = 0;
            for (auto it = a.begin(), e = std::lower_bound(ALL(a), x); it != e; it++) {
                i++;
                power += *it;
            }
            power += (x - 1) * (size - i) + 1;
            std::cout << power << std::endl;
        }
    }
    return 0;
}