#include<iostream>
#include<iomanip>

int main () {
    int *pint {new int {121} };
    std::cout << "pint points to adress: " << pint << " and has the value: " << *pint << "." << std::endl;
    delete pint; // delete memory that pint points to
    pint= nullptr; //  point pint to nullptr to avoid being a dangling pointer

    size_t index;
    std::cout << "We create a dynamically allocted array of ints!" << std::endl;
    std::cout << "Please enter the number of integers that should be allocated in the memory: ";
    std::cin >> index;
    pint = new int[index] {};
    std::cout << "Now we the initialize the memory starting with 0 and ascending: " << std::endl;
    for (auto i {0}; i< index; i++ ) {
        *(pint +i) = i;
        std::cout << std::setw(7) << *(pint+i);
        if ((i%8)==0) {
            std::cout << std::endl;
        }
    }
    delete[] pint; // free the memory pint is pointing to
    std::cout << std::endl << "hihi ! try to use dangling pointer and fail!" << std::endl;
    std::cout << "pint points to adress: " << pint;
    std::cout  << " and the data value ther is : " << *pint << std::endl;
    pint = nullptr; // point pint to nullptr to avoid dangling pointer!
    std::cout << "try to use nullptr!" << std::endl;
    std::cout << "pint points to adress: " << pint;
    std::cout  << " and the data value ther is : " << *pint << std::endl;
    std::cout << "If you can read this the program is going to terminate as intended." << std::endl;
}