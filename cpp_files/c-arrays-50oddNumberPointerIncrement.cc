#include<iostream>
#include<array>

// use a pointer to access an c-arry

int main () {
    int oddnumbers[50] {(50,0)}; // declaration and initialiation with 0
    int *oddnumbers_ptr {oddnumbers}; 

    // init with odd values
    for (int i {0}; i<50; i++) {
        *oddnumbers_ptr=i*2+1;
        oddnumbers_ptr++;
    }

    // print c-array oddnumbers to terminal
    std::cout   <<  "Print all the values of c-array oddnumbers[]:" << std::endl;
    oddnumbers_ptr= oddnumbers;
    for (int i{0}; i<50; i++) {
        std::cout << *(oddnumbers_ptr)  << "\t";
        oddnumbers_ptr++;
    }
    std::cout   << std::endl;

    // print c-array oddnumbers to terminal in REVERSE-order
    std::cout   <<  "Print all the values of c-array oddnumbers[] in reverse order:" << std::endl;
    oddnumbers_ptr--; // re-align the pointer to the element with index 49
    for (int i{0}; i<50; i++) {
        std::cout   << *(oddnumbers_ptr)  << "\t";
        oddnumbers_ptr--;
    }
    std::cout   << std::endl;
}