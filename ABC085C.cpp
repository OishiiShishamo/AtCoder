#include <bits/stdc++.h>

int main () {
    int n = 0, y = 0, count_10k = 0, count_5k = 0, count_1k = 0;
    std::cin >> n >> y;
    if (y % 1000 != 0) {
        std::cout << -1 << " " << -1 << " " << -1 << std::endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        if (y >= 10000) {
            y -= 10000;
            count_10k++;
            continue;
        }
        if (y >= 5000) {
            y -= 5000;
            count_5k++;
            continue;
        }
        if (y >= 1000) {
            y -= 1000;
            count_1k++;
            continue;
        }
        if (i < n - 3 && count_5k >= 1) {
            i += 3;
            count_5k--;
            count_1k += 5;
            continue;
        }
        if (count_10k >= 1) {
            count_10k--;
            count_5k += 2;
            continue;
        }
        if (i < n - 8 && count_10k >= 1) {
            i += 8;
            count_10k--;
            count_1k += 10;
            continue;
        }
        std::cout << -1 << " " << -1 << " " << -1 << std::endl;
        return 0;
    }
    if (y == 0) {
        std::cout << count_10k << " " << count_5k << " " << count_1k << std::endl;
        return 0;
    }
    else {
        std::cout << -1 << " " << -1 << " " << -1 << std::endl;
        return 0;
    }
    return 0;
}