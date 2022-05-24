#include<iostream>
#include<iomanip>


    // -----------------------------
    //  compute x to the power of n
    //           use
    //   crude function for code
    //          segmentation
    //   variables are transferred 
    //   via copied parameters
    // -----------------------------

    // compute x by the power of n

    double powerOfN (double temp_x, int temp_n) { // the parametersh temp_x and temp_n are copies of x and n
        double temp_result {1.0}; //initialization equals x to power of 0
        if (temp_n>0) {
            for (int i {}; i < temp_n; i++) {
                temp_result= temp_result*temp_x;
                std::cout  << "\t" << "n: " << temp_n << " i: " << i+1 << " x^hi: " << temp_result << std::endl;
            }
        } else  {
            std::cout << "start for loop " << temp_result << "\t";
            for (int i {0}; i > temp_n; i--) {
                temp_result= temp_result/ temp_x;
                std::cout << "\t"  << "n: " << temp_n << " i: " << i+1 << " x^i: " << temp_result << std::endl;
            }
        }
        // now give temp_result back as return value!
        return (temp_result);
    }


int main () {
    double x {1};
    int n {0};
    double result {0};

    // get input from the user about x and n
    std::cout << "we will compute x to the power of n!" << std::endl
                << "Please enter a float value for x: ";
    std::cin    >> x;
    std::cout   << "Please enter an integer value for n: ";
    std::cin    >> n;

    // compute x by the power of n
    // use the function powerOfN
    result = powerOfN(x,n);

    // print the solution
    std::cout   << "for x= " << x << " and n= " << n << ", x to the power of n is: " << result << std::endl;    
}