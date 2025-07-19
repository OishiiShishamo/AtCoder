#include <bits/stdc++.h>

int main() {
    std::cin.tie(nullptr);
    std::ios::sync_with_stdio(false);
    int n = 0;
    std::string s_tmp = ""; 
    std::cin >> n;
    std::vector<int> a;
    std::vector<std::string> s;
    for (int i = 0; i < n; i++) {
        std::cin >> s_tmp;
        auto it = std::find(s.begin(), s.end(), s_tmp);
        if (it == s.end()) {
            s.emplace_back(s_tmp);
            a.emplace_back(1);
        }
        else {
            int x = static_cast<int>(std::distance(s.begin(), it));
            a.at(x)++;
        }
    }
    auto it = std::find(a.begin(), a.end(), *std::max_element(a.begin(), a.end()));
    int x = static_cast<int>(std::distance(a.begin(), it));
    std::cout << s.at(x) << std::endl;
    return 0;
}