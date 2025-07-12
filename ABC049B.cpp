#include <bits/stdc++.h>

int main() {
    int h = 0, w = 0;
    std::cin >> h >> w;
    std::vector<std::vector<char>> c(h, std::vector<char>(w, 0));
    for (int i_h = 0; i_h < h; i_h++) {
        for (int i_w = 0; i_w < w; i_w++) {
            std::cin >> c.at(i_h).at(i_w);
        }
    }
    for (int i_h = 0; i_h < h * 2; i_h++) {
        for (int i_w = 0; i_w < w; i_w++) {
            std::cout << c.at(i_h / 2).at(i_w);
        }
        std::cout << std::endl;
    }
    return 0;
}