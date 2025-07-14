#include <bits/stdc++.h>

class Human {
public:
    int GetIndex() const { return index_; }
    long long GetA() const { return a_; }
    long long GetB() const { return b_; }
    Human() = default;
    Human(int index, long long a, long long b) {
        index_ = index;
        a_ = a;
        b_ = b;
    }
private:
    int index_ = 0;
    long long a_ = 0;
    long long b_ = 0;
};

int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> a(n), b(n);
    std::vector<Human> h(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a.at(i) >> b.at(i);
        h.at(i) = Human(i, a.at(i), b.at(i));
    }
    std::sort(h.begin(), h.end(), [](const auto& A, const auto& B) {
        if (A.GetA() * (B.GetA() + B.GetB()) == B.GetA() * (A.GetA() + A.GetB())) {
            return A.GetIndex() < B.GetIndex();
        }
        return A.GetA() * (B.GetA() + B.GetB()) > B.GetA() * (A.GetA() + A.GetB());
        });
    std::cout << h.at(0).GetIndex() + 1;
    for (int i = 1; i < n; i++) {
        std::cout << " " << h.at(i).GetIndex() + 1;
    }
    std::cout << std::endl;
    return 0;
}