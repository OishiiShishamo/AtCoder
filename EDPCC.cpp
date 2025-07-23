#include <bits/stdc++.h>

using ll = long long;

#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define RANGE_CIN(a) for (auto& x : a) std::cin >> x;
#define CHMAX(x,y) x = std::max(x,y)
#define CHMIN(x,y) x = std::min(x,y)
#define UNIQUE_ERASE(v) v.erase(std::unique(ALL(v)), v.end());
#define F_DIG_NUM(a) std::fixed << std::setprecision(a)
#define REP(i, n) for (ll i = 0; i < (ll)(n); i++)
#define FOR(i, a, b) for (ll i = (a); i < (b); i++)

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    ll n = 0, result = 0;
    std::cin >> n;
    std::vector<std::vector<ll>> a(n, std::vector<ll>(3, 0)), dp(n + 1, std::vector<ll>(3, -1));
    dp.at(0) = std::vector<ll>(3, 0);
    REP(i, n) {
        RANGE_CIN(a.at(i));
    }
    REP(i, n) {
        REP(j, 3) {
            REP(k, 3) {
                if (j == k) continue;
                CHMAX(dp.at(i + 1).at(k), a.at(i).at(k) + dp.at(i).at(j));
            }
        }
    }
    REP(i, 3) CHMAX(result, dp.at(n).at(i));
    std::cout << result << std::endl;
    return 0;
}