#include<iostream>
#include<string>
#include<vector>

int main () {
    std::vector<int> numbers {9999, 2012,-3, -191, 32, 121, 2048 , -528, -256, 1};

    //print the vector elements
    for (auto i: numbers) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    // Sort vector
    bool is_modified {true};  // declare a boolean variable. This type can only have two values: true or false! init the variable with true!
    int temp_swap {};           // variable will store the value if an element of the vector needs to be swapped!
    int temp_lowest {};        // stores the lowest value so far!
    size_t lowest_index {};
    temp_lowest = numbers.front(); // stores the first element of numbers as temporary lowest value 
    for (size_t j {}; j< numbers.size()-1;j++) {
        //temp_lowest = numbers.at(j);
        lowest_index = j;
        is_modified = false;
        for (size_t i {j}; i< numbers.size()-1;i++) {
            if ( numbers.at(lowest_index)>numbers.at(i+1) ){
                //temp_lowest = numbers.at(i+1);
                lowest_index = i+1;
                is_modified = true;
            }
        }
        if (is_modified) {
            std::cout << "## swap " << numbers.at(j) << " with " << numbers.at(lowest_index) << std::endl;
            temp_swap = numbers.at(j);
            numbers.at(j) = numbers.at(lowest_index);
            numbers.at(lowest_index) = temp_swap;
        }
        // print modified vector elements
        std::cout << "The vector elements after step " << j+1 << "are: " << std::endl;
        for (auto i: numbers) {
            std::cout << i << "\t";
        }
        std::cout << std::endl;
    }    

    //print the final vector elements
    std::cout << "The sorted vector elements are: " << std::endl;
    for (auto i: numbers) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}