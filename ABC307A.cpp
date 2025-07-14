#include <bits/stdc++.h>

int main() {
    int n = 0, count = 0;
    std::array<std::array<int, 7>, 10> a;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 7; j++) {
            std::cin >> a.at(i).at(j);
        }
    }
    for (int i = 0; i < n - 1; i++) {
        count = 0;
        for (int j = 0; j < 7; j++) {
            count += a.at(i).at(j);
        }
        std::cout << count << " ";
    }
    count = 0;
    for (int i = 0; i < 7; i++) {
        count += a.at(n - 1).at(i);
    }
    std::cout << count << std::endl;
    return 0;
}