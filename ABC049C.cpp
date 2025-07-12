#include <bits/stdc++.h>

int main() {
    std::string s = "";
    int flag = 0;
    std::array<std::string, 4> list = {"dream", "dreamer", "erase", "eraser"};
    std::cin >> s;
    std::reverse(s.begin(), s.end());
    for (auto& x : list) {
        std::reverse(x.begin(), x.end());
    }
    for (int i = 0; i < static_cast<int>(s.size());) {
        flag = 0;
        for (int j = 0; j < 4; j++) {
            if (s.substr(i, list.at(j).size()) == list.at(j)) {
                i += list.at(j).size();
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            std::cout << "NO" << std::endl;
            return 0;
        }
    }
    std::cout << "YES" << std::endl;
    return 0;
}