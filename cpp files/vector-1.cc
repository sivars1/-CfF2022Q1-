#include<iostream>
#include<vector>

int main () {

    std::vector<int> einser_reihe {};
    std::vector<int> divers_initialisierte_reihe {15,0,2127,-12,-199,30878,777,877,191,101};
    std::vector<int> null_initialisierte_reihe(10);
    std::vector<int> gleich_initialisierte_reihe(10,99);
    std::vector<double> vector_double {};

    // assign einser_reihe with values from 1-10
    for (int i {1}; i<=10;i++) {
        einser_reihe.push_back(i);      // push_back assigns a value at the end of the vector
    }

    std::cout << "Print values of vector einser_reihe: " << std::endl;
    for (int i {};i<einser_reihe.size();i++) {
        std::cout << einser_reihe.at(i) << "\t";
    }
    std::cout << std::endl;

    std::cout << "Print Values of vector divers_initialisiserte_reihe: " << std::endl;
    for (int i {}; i< divers_initialisierte_reihe.size();i++) {
        std::cout << divers_initialisierte_reihe.at(i) << "\t";
    }
    std::cout << std::endl;
    
    std::cout << "Print Values of vector null_initialisiserte_reihe: " << std::endl;
    for (auto i: null_initialisierte_reihe) {   //different coding style does the same like examples before it. But is more safe, since out of range acces is avoided.
        std::cout << i << "\t";
    }
    std::cout << std::endl;

    std::cout << "Print Values of vector gleich_initialisiserte_reihe: " << std::endl;
    for (auto i: gleich_initialisierte_reihe) { // print all members of the vector using the range coding style.
        std::cout << i << "\t";
    }
    std::cout << std::endl;

}