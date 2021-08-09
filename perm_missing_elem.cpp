#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int solution(std::vector<int> &A) {
    auto const sum = std::accumulate(std::cbegin(A), std::cend(A), 0);
    return (A.size() + 1) * (A.size() + 2) / 2 - sum;
}

int main() {
    std::vector<int> A { 2, 3, 1, 5 };
    std::cout << solution(A) << std::endl;
    return 0;
}