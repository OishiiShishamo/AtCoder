#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    std::string s = "";
    std::cin >> s;
    std::reverse(s.begin(), s.end());
    for (const auto& x : s) {
        if (x == '6') std::cout << '9';
        else if (x == '9') std::cout << '6';
        else std::cout << x;
    }
    std::cout << std::endl;
    return 0;
}