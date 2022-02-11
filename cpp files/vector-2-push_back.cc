#include<iostream>
#include<vector>

int main () {

    std::vector<int> row_ones_a {1,2,3};
    std::vector<int> row_ones_b {};

    // .push_back() function
    // adds new element to the vector behind the previous last element.

    // example: add 4,5 and 6 the vector row_ones_a
    row_ones_a.push_back(4);
    row_ones_a.push_back(5);
    row_ones_a.push_back(6);
    //add new 

    // do the same for row_ones_b but with a for-loop und up to number 10!
    for (size_t i {1}; i<=10;i++) {
        row_ones_b.push_back(i);      // push_back assigns a value at the end of the vector
    }



}