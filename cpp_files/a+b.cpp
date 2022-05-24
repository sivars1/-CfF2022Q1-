#include<iostream>
using namespace std;

int main ()
{
    int sum, a, b;
    std::cout << "Please type in values for variable a and b: ";
    std::cin >> a >> b;
    /* compute sum of variable a and variable b*/
    sum= a+b;
    std::cout << "Sum of a and b is: " << sum;
    return 0;
}
