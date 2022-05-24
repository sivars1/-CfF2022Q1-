#include<iostream>
#include<vector>

int main () {

    std::vector<int> row_twos {2,4,6,8,10,12,14,16,18,20};
    std::vector<int> row_threes {3,6,9,12};

    // .size() function
    // returns the actual number of elements that are part of its vector.
    // the number changes dynamically if the vector loses elements or gains any.
    // it can be especially useful to define the range a for-loop is counting to if it
    // is applied to a vector (see condition-statement in the foor-loops)

    // example: print the number of elements of a vector and then print each element to prove it.
    std::cout << "vector row_twos has " << row_twos.size() << " elements." << std::endl;
    std::cout << "Print values of vector row-twos: " << std::endl;
    for (int i {};i< row_twos.size();i++) {
        std::cout << row_twos.at(i) << "\t";
    }
    std::cout << std::endl;
    std::cout << "vector row_threes has " << row_threes.size() << " elements." << std::endl;
    std::cout << "Print values of vector row-threes: " << std::endl;
    for (int i {};i< row_threes.size();i++) {
        std::cout << row_threes.at(i) << "\t";
    }
    std::cout << std::endl;

    // now modify the vectors using .push_back() & pop.back() functions
    std::cout << "remove two elements from vector row_twos." << std::endl;
    row_twos.pop_back();
    row_twos.pop_back();
    std::cout << "add three elements to vector row_twos." << std::endl;
    row_threes.push_back(15);
    row_threes.push_back(18);
    row_threes.push_back(21);

    // print their new sizes & show each element to prove it.
    std::cout << "vector row_twos has " << row_twos.size() << " elements." << std::endl;
    std::cout << "Print values of vector row-two: " << std::endl;
    for (int i {};i< row_twos.size();i++) {
        std::cout << row_twos.at(i) << "\t";
    }
    std::cout << std::endl;
    std::cout << "vector row_three has " << row_threes.size() << " elements." << std::endl;
    std::cout << "Print values of vector row-two: " << std::endl;
    for (int i {};i< row_threes.size();i++) {
        std::cout << row_threes.at(i) << "\t";
    }
    std::cout << std::endl;
}