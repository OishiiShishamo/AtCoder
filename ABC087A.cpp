#include <bits/stdc++.h>

int main() {
    int x = 0, a = 0, b = 0;
    std::cin >> x >> a >> b;
    x -= a;  // Cake buy.
    x -= x / b * b;  // Donut buy.
    std::cout << x << std::endl;
    return 0;
}