#include<iostream>
#include<string>
#include<vector>

int main () {
    std::vector<int> numbers {9999, 2012,-3, -191, 32, 121, 1024 , -528, -256, 1};

    //print the vector elements
    for (auto i: numbers) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    // Sort vector
    bool is_modified {true};  // declare a boolean variable. This type can only have two values: true or false! init the variable with true!
    int temp_swap {};           // variable will store the value if an element of the vector needs to be swapped!
    while (is_modified) {
        is_modified=false;
        for (size_t i {}; i< numbers.size()-1;i++) {
            if ( numbers.at(i)>numbers.at(i+1) ){
                temp_swap= numbers.at(i+1);
                numbers.at(i+1)= numbers.at(i);
                numbers.at(i)=temp_swap;
                is_modified=true;
                break;
            }

        }    

    }

    //print the vector elements
    for (auto i: numbers) {
        std::cout << i << "\t";
    }
    std::cout << std::endl;
}