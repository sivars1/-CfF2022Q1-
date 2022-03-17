#include <iostream>
#include <array>
#include <iterator>

int main () {
    const char* p_names [] {
                            "Knabber die Maus",
                            "Lady Wimble Bee",
                            "Lady Liras und Ihre Leibeigenen",
                            "Hen Wen das Orakelschwein",
                            "Leo the Brain",
                            "Lillie Leinenfee",
                            "Camina Drummer",
                            "Lady Eboshi"};
    
    size_t choice {0};
    
    std::cout << "Pick your favorite bad ass character from 1-8! ('9' to quit): ";
    std::cin >> choice;
    if ( choice >=1 && choice <9 ) {
        std::cout << "You chose: " << p_names[choice-1]   << "." << std::endl; 
    }    
    else {
        std::cout << "Sorry your choice was out of range!\n";
    }     
}