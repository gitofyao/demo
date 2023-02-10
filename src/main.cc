#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <memory>

template <typename V>
class Object
{
private:
    V val_;

public:
    Object(V val) : val_(val) {}
    V GetVal() const { return val_; }
};

int main()
{
    std::cout << "Hello CMakeList.txt" << std::endl;
    printf("Hello %d\n", 888);

    std::vector<int> vec = {1, 2, 3, 4, 5};
    vec.clear();
    std::cout << "vec count: " << vec.size() << std::endl;
    vec.emplace_back(1);
    for (const auto &n : vec)
    {
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
    std::unique_ptr<Object<int>> obj_;
    obj_.reset(new Object<int>(1));
    std::cout << obj_->GetVal() << std::endl;
}