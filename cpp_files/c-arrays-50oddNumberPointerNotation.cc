#include<iostream>
#include<array>

int main () {
    int oddnumbers[50] {(50,0)}; // declaration and initialiation with 0

    // init with odd values
    for (int i {0}; i<50; i++) {
        *(oddnumbers+i)=i*2+1;
    }

    // print c-array oddnumbers to terminal
    std::cout   <<  "Print all the values of c-array oddnumbers[]:" << std::endl;
    for (int i{0}; i<50; i++) {
        std::cout << *(oddnumbers+i)  << "\t";
    }
    std::cout   << std::endl;

    // print c-array oddnumbers to terminal in REVERSE-order
    std::cout   <<  "Print all the values of c-array oddnumbers[] in reverse order:" << std::endl;
    for (int i{49}; i>=0; i--) {
        std::cout   << *(oddnumbers+i)  << "\t";
    }
    std::cout   << std::endl;
}