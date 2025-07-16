#include <bits/stdc++.h>

int main() {
    int n = 0;
    std::string s = "";
    std::cin >> n >> s;
    if (s.at(n - 1) == 'o') {
        std::cout << "Yes" << std::endl;
    }
    else {
        std::cout << "No" << std::endl;
    }
    return 0;
}