#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cassert>

int solution(int X, int Y, int D) {
    auto const distance = Y - X;
    return distance / D + ((distance % D) ? 1 : 0);
}

int main() {
    std::cout << solution(10, 85, 30) << std::endl;
    return 0;
}