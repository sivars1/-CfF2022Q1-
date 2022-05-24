#include<iostream>
using namespace std;

void showarray () {
    ;
}

int main () 
{
    size_t max_INDEX {10};
    int first_array [max_INDEX] {9,7,112,4450,11,299,19,3,7,4096}; 
    int second_array [max_INDEX] {};

    
    // Show first array
    for  (auto i : first_array) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    //show second array
    for (auto i: second_array) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    // copy first array data into the second array
    std::cout << std::endl 
            << "Copy the data of the first array into the second array!"
            << std::endl;
    for (int i {0}; i<max_INDEX; i++) {
        second_array[i]=first_array[i];
    } 
    // Show first array
    for (auto i : first_array) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    //show second array
    for (auto i : second_array) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
    // multiply data of the first array by 3 and increment the data of the second array by 11
    std::cout << std::endl
        << "Mulitply the first array by 3 and increment the second array by 11"
        << std::endl;
    for (size_t i {0}; i < max_INDEX; ++i) {
        first_array[i] *= 3;
        second_array[i] += 11;
    }
    // Show first array
    for (size_t i {0}; i < max_INDEX; ++i) {
        std::cout << first_array[i] << "\t";
    }
    std::cout << std::endl;
    //show second array
    for (size_t i {0}; i < max_INDEX; ++i) {
        std::cout << second_array[i] << "\t";
    }
    std::cout << std::endl;
    return 0;
}
