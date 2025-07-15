#include <bits/stdc++.h>

int main() {
    std::string s;
    std::cin >> s;
    int y = s.back() - 48;
    s.erase(s.end() - 2, s.end());
    if (y <= 2) {
        std::cout << s << "-" << std::endl;
        return 0;
    }
    else if (y <= 6) {
        std::cout << s << std::endl;
        return 0;
    }
    else {
        std::cout << s << "+" << std::endl;
        return 0;
    }
    return 0;
}