#include <bits/stdc++.h>

int main() {
    int n = 0, h = 0, tmp = 0, att = 0, p_index = 0, power = 0, count = 0;
    std::vector<int> a, b, s_a, s_b;
    std::cin >> n >> h;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        a.emplace_back(tmp);
        std::cin >> tmp;
        b.emplace_back(tmp);
    }
    s_a = a;
    s_b = b;
    std::sort(s_a.begin(), s_a.end());
    std::sort(s_b.begin(), s_b.end());
    att = s_a.back();
    for (int i = 0; i < n; i++) {
        if (att < s_b.at(i)) {
            p_index = i;
            break;
        }
    }
    for (int i = p_index; i < n; i++) {
        power += s_b.at(i);
    }
    if (power >= h) {
        for (int i = 0; h > 0; i++) {
            count++;
            h -= *(s_b.end() - i - 1);
        }
        std::cout << count << std::endl;
        return 0;
    }
    count += std::ceil(static_cast<double>(h - power) / static_cast<double>(s_a.back()));
    h -= count * s_a.back();
    for (int i = 0; h > 0; i++) {
        count++;
        h -= *(s_b.end() - i - 1);
    }
    std::cout << count << std::endl;

    return 0;
}