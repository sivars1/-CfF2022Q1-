#include<iostream>
#include<iomanip>

int main () {
    double data {3.333};
    double& rdata {data}; // rdata is alias for data

    std::cout   << "data: " << data << std::endl;
    std::cout   << "now using the reference rdata to acces the same value" << std::endl 
                << "rdata: " << data << std::endl;
    std::cout   << "now data is assigned a new value by using its reference rdata: rdata = 1.333" << std::endl;             
    rdata = 1.333; // now data has the value 1.333
    std::cout << "data: " << data << std::endl;
}