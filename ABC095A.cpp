#include <bits/stdc++.h>

#define ALL(a) (a).begin(), (a).end()
using ll = long long;

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    ll n = 700;
    std::string s = "";
    std::cin >> s;
    std::sort(ALL(s));
    for (int i = 0; i < 3; i++) {
        if (s.at(i) == 'x') {
            n += 100 * i;
            break;
        }
        else if (i == 2) n += 300;
    }
    std::cout << n << std::endl;
    return 0;
}