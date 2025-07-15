#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0;
    std::string tmp = "";
    std::cin >> n;
    std::set<std::string> s;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (s.contains(tmp) == 0) {
            std::reverse(tmp.begin(), tmp.end());
            if (s.contains(tmp) == 0) {
                s.emplace(tmp);
            }
        }
    }
    std::cout << s.size() << std::endl;
    return 0;
}