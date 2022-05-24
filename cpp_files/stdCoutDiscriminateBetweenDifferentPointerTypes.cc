#include<iostream>

int main () {
    const char* p_name {"Knabber die Maus"};
    int number {121};
    int* p_number {&number};

    std::cout   << "std::cout treats pointers of different data types differently!\n";
    std::cout   << "For example: pointer to constant char will prompt std::cout to output the whole C-Char-String. while dereferencing the same pointer will output the first char character only. In neither case will the address of the C-char string be displayed!\n";
    std::cout   << "In contrast: std::cout will prompt the address if faced with an pointer to int. if faced with a dereferenced pointer to in the data of the according int will be displayed.\n";
    std::cout   << "See for yourself:\n"
    std::cout   << p_name   << "\t" << *p_name << std::endl;
    
    std::cout   << p_number << "\t" << *p_number << std::endl;
}