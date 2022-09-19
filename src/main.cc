#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Hello CMakeList.txt" << std::endl;
    printf("Hello %d\n", 888);

    std::vector<int> vec = {1, 2, 3, 4, 5};
    std::cout << "vec[2]: " << vec[2] << std::endl;
    std::remove(vec.begin(), vec.end(), 3);
    std::cout << "vec count: " << vec.size() << std::endl;
    std::cout << "vec[2]: " << vec[2] << std::endl;
    std::cout << "vec[4]: " << vec[4] << std::endl;
    for (const auto& n : vec) {
        std::cout << n << std::endl;
    }
    std::cout << "--------------------" << std::endl;
    auto iter = std::find(vec.begin(), vec.end(), 3);
    if (iter != vec.end()) {
        vec.erase(iter);
    }
    for (const auto& n : vec) {
        std::cout << n << std::endl;
    }
}