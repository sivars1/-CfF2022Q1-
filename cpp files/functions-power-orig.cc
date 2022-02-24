#include<iostream>
#include<iomanip>

int main () {
    // -----------------------------
    //  compute x to the power of n
    // -----------------------------


    double x {1};
    int n {0};

    // get input from the user about x and n
    std::cout << "we will compute x to the power of n!" << std::endl
                << "Please enter a float value for x: ";
    std::cin    >> x;
    std::cout   << "Please enter an integer value for n: ";
    std::cin    >> n;
    std::cout   << std::endl;

    // compute x by the power of n
    double result {1.0}; //initialization equals x to power of 0
    std::cout << "\n start for loop \n";
    if (n>0) {
        for (int i {}; i < n; i++) {
            result= result*x;
            std::cout << "\tn: " <<n << " i: " << i << "\tx^i: " << result << "\n";
        }
    } else  {
        for (int i {}; i > n; i--) {
            result= result/x;
            std::cout << "\tn: " << n << " i: " << i << "\tx^i: " << result << "\n";
        }
    }

    // print the solution
    std::cout   << "for x= " << x << " and n= " << n << ", x to the power of n is: " << result << std::endl;    
}