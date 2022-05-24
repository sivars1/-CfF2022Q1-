#include <iostream>
#include <iomanip>
#include <vector>

int main() {
    std::vector<int> vector1 {};
    std::vector<int> vector2 {11,2};
    std::vector<int> vector3(11,2);

    // print vectors
    std::cout << "Print vector 'vector1': ";
    for(auto v:vector1) {
        std::cout   << v  
                    << "\t";
    }
    
    std::cout   << std::endl
                << "Print vector 'vector2': ";
    for(auto v:vector2) {
        std::cout   << v  
                    << "\t";
    }   
    
    std::cout   << std::endl
                << "Print vector 'vector3': ";
    for(auto v:vector3) {
        std::cout   << v  
                    << "\t";
    }
    
    std::cout   << std::endl
                << "modify vector 'vector4' using the .push_back() and .pop_back() functions." 
                << std::endl;
    std::vector<int> vector4 {};

    vector4.push_back(17);
    std::cout   << std::endl
                << "execute vector4.push_back(17) function. 'vector4' : ";
    for(auto v:vector4) {
        std::cout   << "\t"
                    << v;
    } 

    vector4.push_back(33);
    std::cout   << std::endl
                << "execute vector4.push_back(33) function. 'vector4' : ";
    for(auto v:vector4) {
        std::cout   << "\t"
                    << v;
    } 

    vector4.pop_back();
    std::cout   << std::endl
                << "execute vector4.pop_back() function. 'vector4' : ";
    for(auto v:vector4) {
        std::cout   << "\t"
                    << v;
    } 

    vector4.pop_back();
    std::cout   << std::endl
                << "execute vector4.pop_back() function. 'vector4' : ";
    for(auto v:vector4) {
        std::cout   << "\t"
                    << v;
    } 

    vector4.push_back(99);
    std::cout   << std::endl
                << "execute vector4.push_back(99) function. 'vector4' : ";
    for(auto v:vector4) {
        std::cout   << "\t"
                    << v;
    } 

}