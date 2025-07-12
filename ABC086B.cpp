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
    std::string a = "", b = "";
    std::vector<int> prime_number;
    int num = 0;
    std::cin >> a >> b;
    num = std::stoi(a + b);
    prime_number = PrimeNumber(num);
    std::vector<int> factored_by_prime_factorization = PrimeFactorDecomposition(num, prime_number);
    if (factored_by_prime_factorization.size() % 2 != 0 || factored_by_prime_factorization.size() < 2) {
        std::cout << "No" << std::endl;
        return 0;
    }
    while (1) {
        if (factored_by_prime_factorization.size() == 0) {
            std::cout << "Yes" << std::endl;
            return 0;
        }
        int tmp = factored_by_prime_factorization.back();
        for (int i = 0; i < 2; i++) {
            if (*(factored_by_prime_factorization.end() - i - 1) != tmp) {
                std::cout << "No" << std::endl;
                return 0;
            }
        }
        for (int i = 0; i < 2; i++) {
            factored_by_prime_factorization.pop_back();
        }
    }
    return 0;
}