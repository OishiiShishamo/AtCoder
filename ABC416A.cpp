#include <bits/stdc++.h>

using ll = long long;
using vll = std::vector<ll>;
using vvll = std::vector<vll>;

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
    ll n = 0, l = 0, r = 0, flag = 0;
    std::string s = "";
    std::cin >> n >> l >> r >> s;
    FOR(i, l - 1, r) {
        if (s.at(i) == 'x') flag = 1;
    }
    if (flag) {
        std::cout << "No" << std::endl;
    }
    else {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}