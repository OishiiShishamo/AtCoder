#include <bits/stdc++.h>

int main() {
    int s = 0, count = 0;
    std::vector<int> a;
    std::cin >> s;
    a.emplace_back(s);
    while (1) {
        count++;
        if (s % 2 == 0) {
            s /= 2;
        }
        else {
            s = s * 3 + 1;
        }
        std::sort(a.begin(), a.end());
        if (std::binary_search(a.begin(), a.end(), s)) {
            std::cout << count + 1 << std::endl;
            return 0;
        }
        a.emplace_back(s);

    }
    return 0;
}