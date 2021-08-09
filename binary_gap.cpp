#include <iostream>

int solution(int N) {
    if (N == 0) { return 0; }
    while (N && (N & 1) == 0) {
        N >>= 1;
    }
    N >>= 1;
    int best_gap = 0;
    while (N) {
        int gap = 0;
        while (N && (N & 1) == 0) {
            N >>= 1;
            ++gap;
        }
        N >>= 1;
        if (gap > best_gap) {
            best_gap = gap;
        }
    }
    return best_gap;
}

int main() {
    std::cout << "   9: " << solution(9) << std::endl;
    std::cout << " 529: " << solution(529) << std::endl;
    std::cout << "  20: " << solution(20) << std::endl;
    std::cout << "  15: " << solution(15) << std::endl;
    std::cout << "  32: " << solution(32) << std::endl;
    std::cout << "1041: " << solution(1041) << std::endl;
    return 0;
}