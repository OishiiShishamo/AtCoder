#include <bits/stdc++.h>

std::vector<int> PrimeNumber(int a) {
    int tmp = 0;
    std::vector<int> v;
    if (a < 3) {
        return v;
    }
    v.emplace_back(2);
    for (int i = 3; i <= a; i += 2) {
        tmp = 0;
        for (const auto& x : v) {
            if (x * x > i) break;
            if (i % x == 0) {
                tmp = 1;
            }
        }
        if (tmp == 0) v.emplace_back(i);
    }
    return v;
}

std::vector<int> PrimeFactorDecomposition(int a, std::vector<int> prime_number) {
    std::vector<int> output;
    int tmp = 0;
    while (1) {
        tmp = 0;
        for (const auto& x : prime_number) {
            if (a % x == 0) {
                output.emplace_back(x);
                a /= x;
                tmp = 1;
                break;
            }
        }
        if (tmp == 0) return output;
    }
}

int main() {
    int a = 0;
    std::cin >> a;
    if (a == 1) {
        std::cout << "YES" << std::endl;
        return 0;
    }
    std::vector<int> prime_number = PrimeNumber(a);
    std::vector<int> factored_by_prime_factorization = PrimeFactorDecomposition(a, prime_number);
    if (factored_by_prime_factorization.size() % 3 != 0 || factored_by_prime_factorization.size() < 3) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    while (1) {
        if (factored_by_prime_factorization.size() == 0) {
            std::cout << "YES" << std::endl;
            return 0;
        }
        int tmp = factored_by_prime_factorization.back();
        for (int i = 0; i < 3; i++) {
            if (factored_by_prime_factorization.at(factored_by_prime_factorization.size() - i - 1) != tmp) {
                std::cout << "NO" << std::endl;
                return 0;
            }
        }
        for (int i = 0; i < 3; i++) {
            factored_by_prime_factorization.pop_back();
        }
    }
}