#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

int main() {
    std::cout << "Hello CMakeList.txt" << std::endl;
    printf("Hello %d\n", 888);

    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.clear();
    std::cout << "vec count: " << vec.size() << std::endl;
    vec.emplace_back(1);
    for (const auto& n : vec) {
        std::cout << n << std::endl;
    }
    std::cout << "--------------------" << std::endl;
    // auto iter = std::find(vec.begin(), vec.end(), 3);
    // if (iter != vec.end()) {
    //     vec.erase(iter);
    // }
    // for (const auto& n : vec) {
    //     std::cout << n << std::endl;
    // }
}