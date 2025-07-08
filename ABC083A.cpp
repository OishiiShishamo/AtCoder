#include <bits/stdc++.h>

int main() {
    int a = 0, b = 0, c = 0, d = 0, l = 0, r = 0;
    std::cin >> a >> b >> c >> d;
    l = a + b;
    r = c + d;
    if (l == r) {
        std::cout << "Balanced" << std::endl;
    }
    else if (l > r) {
        std::cout << "Left" << std::endl;
    }
    else {
        std::cout << "Right" << std::endl;
    }
    return 0;
}