#include <bits/stdc++.h>

int main() {
    int n = 0, tmp = 0, alice = 0, bob = 0;
    std::vector<int> v;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cin >> tmp;
        v.emplace_back(tmp);
    }
    std::sort(v.begin(), v.end());
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            alice += v.back();
            v.pop_back();
        }
        else {
            bob += v.back();
            v.pop_back();
        }
    }
    std::cout << alice - bob << std::endl;
    return 0;
}