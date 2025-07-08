#include <bits/stdc++.h>

int main() {
    int n = 0, a = 0, b = 0, out = 0;
    std::cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        if (i < 10) {
            if (a <= i && i <= b) {
                out += i;
            }
            continue;
        }
        std::string in = std::to_string(i);
        int tmp = 0;
        for (const char& x : in) {
            tmp += x - 48;
        }
        if (a <= tmp && tmp <= b) {
            out += i;
        }
    }
    std::cout << out << std::endl;
    return 0;
}