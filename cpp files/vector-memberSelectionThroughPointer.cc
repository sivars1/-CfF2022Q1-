#include<iostream>
#include<vector>

int main () {
    std::vector<int> data(10,0);
    auto* pdata= &data;

    data.push_back(6);  // add 6 to vector via push_back function
    (*pdata).push_back(66); // push back of 66 into vector data by dereferencing operator on pointer pdata
    pdata->push_back(666); // push_back 666 with the indirect member selection operator via pointer pdata

    // now get the values back;


    std::cout << "print all members of vector data!" << std::endl;
    std::cout << "using the dereferencing operator: " << std::endl;
    for( auto ptr=data.begin(); ptr!=data.end(); ptr++) {
        std::cout << *ptr << "\t";
    }
    
    std::cout << std::endl << "using the indirect member selection method: " << std::endl;
    int i {};
    for (auto ptr=data.begin(); ptr!=data.end();ptr++) {
        std::cout << pdata->at(i) << "\t";
        i++;
    }
    

}