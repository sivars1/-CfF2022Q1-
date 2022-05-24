#include<iostream>
#include<iomanip>
#include<memory>
#include<vector>
#include<cctype>

int main() {
    //declare and init a unique pointer
     std::unique_ptr<int> int1_up {new int{121}};

    // Same thing but in a better & more secure way
    auto int2_up {std::make_unique<int>(144)};

    // now with a unique pointer to an array
    size_t n {10};
    std::unique_ptr<double[]> double_array1_up {new double[n]};
    for (size_t i {}; i<n;i++) {
        double_array1_up[i]=256.333+i;
    }
    
    // Same thing but in a better & more secure way
    auto double_array2_up {std::make_unique<double[]>(n)};
    for (size_t i{}; i<n; i++) {
        double_array2_up[i]=1024.333+i;
    }
    
    // print values
    std::cout << "int1_up points to adress: " << int1_up.get() << " with the value: " << *int1_up << std::endl;
    std::cout << "int2_up points to adress: " << int2_up.get() << " with the value: " << *int2_up << std::endl;

    // now print the values of the pointer to arrays
    std::cout << "double_array1_up points to adress: " << double_array1_up.get() << std::endl << "The values of the array are: " << std::endl;
    for (size_t i {}; i < n; i++) {
        std::cout << double_array1_up[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "double_array2_up points to adress: " << double_array2_up.get() << std::endl << "The values of the array are: " << std::endl;
    for (size_t i {}; i < n; i++) {
        std::cout << double_array2_up[i] << "\t";
    }
    std::cout << std::endl;

    // now Reset the pointers and try to show their values
    int1_up.reset(); // should point to nullptr now
    int2_up.reset(); // same for int2_up
    std::cout << "int1_up1 points to the value: " << *int1_up; // should cause error and exit the programm 
    std::cout << "int2_up points to the value: " << *int2_up; // will not be executed anymore.
}