#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(int N, std::vector<int> &A) {
    std::vector<int> s(N);
    int max_value = 0;
    std::for_each(std::cbegin(A), std::cend(A), [&](auto const& elem){
        if (elem == N + 1) {
            std::fill(std::begin(s), std::end(s), max_value);
        } else {
            s[elem-1]++;
            max_value = std::max(s[elem-1], max_value);
        }
    });
    return s;
}

int main() {
    std::vector<int> A { 3, 4, 4, 6, 1, 4, 4 };
    auto const s1 = solution(5, A);
    std::for_each(std::cbegin(s1), std::cend(s1), [](auto const& elem){ std::cout << elem << ", "; });
    std::cout << std::endl;
    return 0;
}