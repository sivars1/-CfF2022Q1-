#include<iostream>
#include<vector>

int main () {

    std::vector<int> row_fours {4,8,12,16,20,24,28,32,36,40};
    std::vector<int> row_fives {5,10,15,20,25,30,35,40,45,50};

    // -----------------------------------------
    // .pop_back() function
    // removes the last element of an vector.
    // ------------------------------------------

    // first prsize_t initial elements of vector row-fours & row_fives
    std::cout << "Print elements of vector row-fours: " << std::endl;
    for (size_t i {};i< row_fours.size();i++) {
        std::cout << row_fours.at(i) << "\t";
    }
    std::cout << std::endl;
    std::cout << "Print elements of vector row-fives: " << std::endl;
    for (size_t i {};i< row_fives.size();i++) {
        std::cout << row_fives.at(i) << "\t";
    }
    std::cout << std::endl;

    // example: remove the last 3 values from vector row-fours and print its elements
    std::cout << "remove the last 3 values from vector row-fours!" << std::endl;
    row_fours.pop_back();
    row_fours.pop_back();
    row_fours.pop_back();

    // remove 6 elements from the row_fives vector using a for-loop and print its elements
    std::cout << "remove 6 elements from the row_fives vector using a for-loop!" << std::endl;
    for (size_t i {1}; i<=6;i++) {
        row_fives.pop_back();    
    }

    // Then print modified lists of elements vector row-fours & vector row_fives
    std::cout << "Print elements of vector row-fours: " << std::endl;
    for (size_t i {};i< row_fours.size();i++) {
        std::cout << row_fours.at(i) << "\t";
    }
    std::cout << std::endl;
    std::cout << "Print elements of vector row-fives: " << std::endl;
    for (size_t i {};i< row_fives.size();i++) {
        std::cout << row_fives.at(i) << "\t";
    }
    std::cout << std::endl;

}