#include <iostream>
#include <iomanip>
#include <array>

int main () {
    const unsigned int MAX_INDEX {9};
    std::array<int,MAX_INDEX> array { 7, 23, 11, 19, 3, 5, 21, 27, 31 };

    // access first element. Range-safe!
    std::cout   << "First Element of Array is: "
                << array.front()
                << std::endl
                << "Last Element of the array is: "
                << array.back()
                << std::endl;
    // show whole array
    std::cout   << "Now we show all the elements of the array!"
                << std::endl;
    for (auto element: array) {
        std::cout   << element << "  ";
    }
    std::cout << std::endl;
    // set whole array to one value
    array.fill(12);
    std::cout   << "Use .fill() function to set whole array to value of 12!"
                << std::endl;
    for (size_t i; i<array.size(); i++) {
        std::cout   << array.at(i) << "  ";
    }

}