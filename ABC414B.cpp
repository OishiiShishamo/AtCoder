#include <bits/stdc++.h>

int main() {
    int n = 0, itmp = 0;
    long long count = 0;
    char ctmp = ' ';
    std::string result = "";
    std::vector<char> cinput;
    std::vector<int> iinput;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> ctmp;
        std::cin >> itmp;
        count += itmp;
        if (count > 100) {
            std::cout << "Too Long" << std::endl;
            return 0;
        }
        cinput.emplace_back(ctmp);
        iinput.emplace_back(itmp);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < iinput.at(i); j++) {
            result += cinput.at(i);
        }
    }
    std::cout << result << std::endl;;
    return 0;
}