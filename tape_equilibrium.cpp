#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <limits>

int solution(std::vector<int> &A) {
    auto const sum = std::accumulate(std::cbegin(A), std::cend(A), 0);
    int partial_sum = 0;
    int best_equilibrium = std::numeric_limits<int>::max();
    std::for_each(std::cbegin(A), std::cend(A), [&](auto const& elem) {
        partial_sum += elem;
        auto const other_part = sum - partial_sum;
        auto const equilibrium = std::abs(partial_sum - other_part);
        if (equilibrium < best_equilibrium) {
            best_equilibrium = equilibrium;
        }
    });

    return best_equilibrium;
}

int main() {
    std::vector<int> A { 3, 1, 2, 4, 3 };
    std::cout << solution(A) << std::endl;
    return 0;
}