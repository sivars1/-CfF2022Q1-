#include<iostream>
#include<iomanip>
#include<vector>
#include<cmath>
//#include</bits/stdc++.h>

int main () {
    double sum;
    std::vector<double> double_values {};

    int max_index {};
    std::cout << "How many elements should be computed ? ";
    std::cin >> max_index; 

    // create & initialize elements
    // compute sum of all elements
    std::cout.flags( std::ios_base::left);
    std::cout   << std::setw(10) << "Index"  << std::setw(25) << "Element" << std::setw(25) << "Sum of Elements"   << std::endl;
    for (int n {}; n < max_index; n++) {
        double_values.push_back(1/(double(n)+1)/(double(n)+1)); // store 1/(n+1)^2 in double_values element with index n
        sum = sum + double_values.at(n);
        std::cout    << std::setw(8) << std::right /*<<std::setfill('0')*/ << n << "  " << std::setw(23) << std::setprecision(10) <<std::left << double_values.at(n) << "  " << std::setw(20) << std::setprecision(15) << sum  << std::endl;
    }
    std::cout   << "Multiply by 6 and take sqr!:"   << std::sqrt(6*sum)  <<  std::endl;
    // 
}