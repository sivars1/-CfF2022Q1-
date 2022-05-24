#include<iostream>
#include<vector>

factorial_loop (long long number) {

    long long factorial {number};
    // now the real computation
    if (factorial > 0) {
        for (size_t n {number-1}; n>1;n--) {
            factorial *=n;
        }
        //print answer
        std::cout << "++ Loop approach ++" << std::endl << "The factorial of " << number << " is " << factorial <<"." << std::endl; 
    }
    else if (factorial==0) {
        factorial=0;
        //print answer
        std::cout << "++ Loop approach ++" << std::endl << "The factorial of " << number << " is " << factorial <<"." << std::endl; 
    }
    else {
        std::cout << "++ Loop approach ++" << std::endl << "### Error! Wrong Input! ## " << std::endl << "Factorial is not defined for these numbers!" << std::endl;
        exit;
    }
}

long long factorial_rec(long long n) {
    if (n==0 || n==1) {
        return 1;
    }
    else if (n>1) {
        n*=factorial_rec(n-1);
        return n;
    }
    else {
        std::cout << "## Recursive Approach: ##" << std::endl <<"## Error ## "<< std::endl <<"##input is out of range!" << std::endl;
        return (0);
        exit;
    }

    return n;
}

int main() {
        //algorithm to compute factorial of number
    long long number {};
    
    std::cout << "Please enter number for factorial computation: " ;
    std::cin >> number;

    // use loop based function
    factorial_loop(number);  
    // use recursive function
    std::cout <<"+++ Recursive Approach! +++" << std::endl << "Factorial of number "  << number << " is " << factorial_rec(number) << std::endl;
}