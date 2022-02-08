#include<iostream>

int main () {
    int choice {};
    const size_t ARRAY_INDEX {10};
    double dvalues[ARRAY_INDEX] {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0};
    double* pdvalues {dvalues};
    int     intvalues [ARRAY_INDEX] {1,2,3,4,5,6,7,8,9};
    int* pintvalues {intvalues};
    short int sintvalues [ARRAY_INDEX] {1,2,3,4,5,6,7,8,9};
    short int *psintvalues {sintvalues};

    std::cout << "Adress \t dvalues \t Adress \t intvalues \t Adress \t sintvalues"<< std::endl;
    
    for (auto i : dvalues) {
        std::cout << pdvalues << "\t" << *pdvalues << "\t" << pintvalues << "\t" << *pintvalues << "\t" << psintvalues << "\t" << *psintvalues << std::endl;
        pdvalues++;
        pintvalues++;
        psintvalues++;
    }
}