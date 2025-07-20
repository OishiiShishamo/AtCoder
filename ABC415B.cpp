#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    std::string s = "";
    std::cin >> s;
    int n = s.size(), a = 0;
    for (int i = 0; i < n; i++) {
        if (s.at(i) == '#') {
            a++;
            if (a == 1) {
                std::cout << i + 1 << ",";
            }
            else {
                a = 0;
                std::cout << i + 1 << std::endl;
            }
        }
    }
    return 0;
}