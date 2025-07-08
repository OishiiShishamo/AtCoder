#include <bits/stdc++.h>

int main() {
    std::array<int, 8> s;
    std::array<int, 8> sorted_s;
    for (auto& x : s) {
        std::cin >> x;
        if (x % 25 != 0 || x < 100 || x > 675) {
            std::cout << "No" << std::endl;
            return 0;
        }
    }
    sorted_s = s;
    std::sort(sorted_s.begin(), sorted_s.end());
    if (s.size() == sorted_s.size() && std::equal(s.cbegin(), s.cend(), sorted_s.cbegin())) {
        std::cout << "Yes" << std::endl;
        return 0;
    }
    std::cout << "No" << std::endl;
    return 0;
}