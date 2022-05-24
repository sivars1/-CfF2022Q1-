#include<iostream>
#include<iomanip>

int main () {
    double temperatures[] { 13.0, 55.3, 77.7, 1024.24, 1.111};

    // ranged loop works with a local copy of the temperature elements called t
    // t cannot be used to acces & modifiy the the temperatures elements
    double sum {};
    size_t count {};
    std::cout << "computing the sum of the  temperatures: " << std::endl
                << "#" << "\t" << "temperature" << "\t" << "sum" << std::endl;
    for(auto t : temperatures) {
        sum+=t; 
        std::cout << count+1 << "\t" << t << "\t\t" << sum << std::endl;
        count++;
    }

    // using the ranged loop with a reference, lets you access & mofify the elements of temperature
    std::cout << "computing the celsius values out of the fahrenheit values: " << std::endl
                << "#" << "\t" << "t-fahrenheit" << "\t" << "t-celsius" << std::endl;
    count = 0;
    const double F2C {5.0/9.0};
    for (auto& d: temperatures) {
        std::cout << count << "\t" << d << "\t\t" << (d-32)*F2C << std::endl;
        d = (d-32)*F2C;

    }
}