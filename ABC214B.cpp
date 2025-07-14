#include <bits/stdc++.h>

int main() {
    int s = 0, t = 0, count = 0;
    std::cin >> s >> t;
    for (int i = 0; i <= s; i++) {
        for (int j = 0; j <= s; j++) {
            for (int k = 0; k <= s; k++) {
                if (i + j + k <= s && i * j * k <= t) {
                    count++;
                }
            }
        }
    }
    std::cout << count << std::endl;
    return 0;
}