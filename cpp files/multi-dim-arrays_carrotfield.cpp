#include<iostream>
using namespace std;

void showarray () {
    ;
}

int main () 
{
   const size_t max_row {3}, max_column {5};
   float carrots[max_row][max_column] {
       { 1.3, 0.1, 0.99, 0.72, 0.233 },
       { 9.9, 10.2, 0.21 , 0.012, 0.33},
       { 17.3, 4.1, 3.2}
        };
   
   // show carrrots
   for (size_t i {}; i< max_row; i++) {
        for (size_t j {}; j < max_column; j++ ) {
            std::cout << carrots[i][j] << "\t";
        }
        std::cout << std::endl;
   }    
       return 0;
}
