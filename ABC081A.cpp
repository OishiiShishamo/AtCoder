#include <bits/stdc++.h>

int main() {
    std::string input = "";
    int n = 0;
    std::cin >> input;
    for (char A : input) {
        if (A == '1') n++;
    }
    std::cout << n << std::endl;
    return 0;
}