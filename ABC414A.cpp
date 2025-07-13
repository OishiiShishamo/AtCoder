#include <bits/stdc++.h>

int main() {
    int n = 0, l = 0, r = 0, tmp = 0, count = 0;
    std::vector<int> x, y;
    std::cin >> n >> l >> r;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (tmp > l) {
            std::cin >> tmp;
        }
        else {
            std::cin >> tmp;
            if (tmp >= r) {
                count++;
                continue;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}