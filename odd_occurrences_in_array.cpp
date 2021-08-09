#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cassert>

int solution(std::vector<int> &A) {
    std::unordered_set<int> seen;
    std::for_each(std::cbegin(A), std::cend(A), [&](auto const& elem){
        auto res = seen.insert(elem);
        if (!res.second) {
            seen.erase(elem);
        }
    });
    assert(seen.size() > 0);
    return *seen.cbegin();
}

int main() {
    std::vector<int> A{9, 3, 9, 3, 9, 7, 9};
    std::cout << solution(A) << std::endl;
    return 0;
}