#include <bits/stdc++.h>

int main() {
    int n = 0, tmp = 0, pos_x = 0, pos_y = 0;
    std::vector<int> t, x, y;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        t.emplace_back(tmp);
        std::cin >> tmp;
        x.emplace_back(tmp);
        std::cin >> tmp;
        y.emplace_back(tmp);
    }
    tmp = 0;
    for (int i = 0; i < n; i++) {
        if (t.at(i) - tmp < std::abs(x.at(i) - pos_x + y.at(i) - pos_y)) {
            std::cout << "No" << std::endl;
            return 0;
        }
        else {
            if ((t.at(i) - tmp - x.at(i) - pos_x + y.at(i) - pos_y) % 2 != 0) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
        tmp = t.at(i);
        pos_x = x.at(i);
        pos_y = y.at(i);
    }
    std::cout << "Yes" << std::endl;
    return 0;
}