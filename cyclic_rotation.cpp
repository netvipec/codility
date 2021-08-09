#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> solution(std::vector<int> &A, int K) {
    int right_shift = K % A.size();

    std::rotate(A.rbegin(), A.rbegin() + right_shift, A.rend());
    return A;
}

int main() {
    std::vector<int> v1{3, 8, 9, 7, 6};
    auto s1 = solution(v1, 3);
    std::for_each(std::cbegin(s1), std::cend(s1), [](auto const& elem){ std::cout << elem << ", "; });
    std::cout << std::endl;

    std::vector<int> v2{0, 0, 0};
    auto s2 = solution(v2, 1);
    std::for_each(std::cbegin(s2), std::cend(s2), [](auto const& elem){ std::cout << elem << ", "; });
    std::cout << std::endl;

    std::vector<int> v3{1, 2, 3, 4};
    auto s3 = solution(v3, 4);
    std::for_each(std::cbegin(s3), std::cend(s3), [](auto const& elem){ std::cout << elem << ", "; });
    std::cout << std::endl;
    return 0;
}