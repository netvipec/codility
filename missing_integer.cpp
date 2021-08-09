#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> &A) {
    std::sort(std::begin(A), std::end(A));
    auto it = std::lower_bound(std::cbegin(A), std::cend(A), 1);
    if (it == std::cend(A)) {
        return 1;
    } else {
        int pre_actual = 1;
        int actual = 1;
        while (it != std::cend(A) && (*it == actual || *it == pre_actual)) {
            if (*it == actual) {
                ++actual;
                if (actual > 2) {
                    ++pre_actual;
                }
            }
            ++it;
        }
        return actual;
    }
}

int main() {
    std::vector<int> A1 { 1, 3, 6, 4, 1, 2 };
    std::cout << solution(A1) << std::endl;

    std::vector<int> A2 { 1, 2, 3 };
    std::cout << solution(A2) << std::endl;

    std::vector<int> A3 { -1, -1 };
    std::cout << solution(A3) << std::endl;
    return 0;
}