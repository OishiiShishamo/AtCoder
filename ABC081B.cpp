#include <bits/stdc++.h>

int main() {
    int n = 0;
    int o = 0;
    int tmp = 0; // tmp : Input.
    std::vector<int> a;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        a.emplace_back(tmp);
    }
    // tmp : flag.
    while (1) {
        tmp = 0;
        for (const auto& A : a) {
            if (A % 2 == 1) tmp = 1;
        }
        if (tmp == 0) {
            o++;
            for (auto& A : a) {
                A /= 2;
            }
        }
        else {
            break;
        }
    }
    std::cout << o << std::endl;
    return 0;
}