#include<iostream>
#include<iomanip>
#include<memory>
#include<cctype>

int main () {
    std::shared_ptr<int> numbers_sp1 {};
    numbers_sp1 = std::make_shared<int>(121);

    std::shared_ptr<int> numbers_sp2 {};
    numbers_sp2 = std::make_shared<int>(256);

    // now with an pointer to array
    size_t n {10};
    // auto numbers_sp4 {std::make_shared<int[]>(n)}; // does not compile! no idea what is the problem!

    std::cout << "numbers_sp1 points to the value: " << *numbers_sp1 << " at adress: " << numbers_sp1 << std::endl;
    std::cout << "numbers_sp2 points to the value: " << *numbers_sp2 << " at adress: " << numbers_sp2 << std::endl;

}