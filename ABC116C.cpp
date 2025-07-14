#include <bits/stdc++.h>

int main() {
    int n = 0, count = 0, tmp = 0;
    std::cin >> n;
    std::vector<int> h(n);
    for (auto& x : h) {
        std::cin >> x;
    }
    while (1) {
        tmp = 0;
        for (int i = 0; i < n; i++) {
            if (h.at(i) != 0) {
                tmp = i;
                break;
            }
            else if (i == n - 1) {
                tmp = -1;
                break;
            }
        }
        if (tmp == -1) break;
        count++;
        for (int i = tmp; i < n; i++) {
            if (h.at(i) != 0) {
                h.at(i)--;
            }
            else {
                break;
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}