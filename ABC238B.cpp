#include <bits/stdc++.h>

int Rotate(int a, int b) {
    a += b;
    if (a > 360) a -= 360;
    return a;
}

int main() {
    int n = 0, tmp = 0, angle = 0;
    std::vector<int> a;
    std::cin >> n;
    a.emplace_back(0);
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        if (n == 1 && tmp == 1) {
            std::cout << 359 << std::endl;
            return 0;
        }
        angle = Rotate(angle, tmp);
        a.emplace_back(angle);
    }
    std::sort(a.begin(), a.end());
    angle = 0;
    tmp = 0;
    for (const auto& x : a) {{
            if (angle < std::max(tmp, x) - std::min(tmp, x)) {
                angle = std::max(tmp, x) - std::min(tmp, x);
            }
        }
        tmp = x;
    }
    if (angle < a.at(0) + 360 - a.back()) {
        angle = a.at(0) + 360 - a.back();
    }
    std::cout << angle << std::endl;
    return 0;
}