#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0, c = 0, x = 0, out = 0;  // a 500y b 100y c 50y x ny
    std::cin >> a >> b >> c >> x;
    for (int i = 0; i <= a; i++) {
        for (int j = 0; j <= b; j++) {
            for (int k = 0; k <= c; k++) {
                if (i * 500 + j * 100 + k * 50 == x) out++;
            }
        }
    }
    std::cout << out << std::endl;
    return 0;
}