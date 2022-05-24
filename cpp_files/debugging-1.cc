#include<iostream>
#include<vector>

int main (){
    char eingabe{};
    std::cin >>eingabe;
    eingabe=std::toupper(eingabe);
    std::cout << "You typed in: " << eingabe;
}