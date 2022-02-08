#include<iostream>
using namespace std;

void showarray () {
    ;
}

int main () 
{
    const size_t max_names {13}, max_namelength {85};
    char names[max_names][max_namelength] {
       "Evil Kenivil",
       "Clark Kent",
       "Scarlett O'hara",
       "Thusnelda the Witch",
       "Sharif Omar",
       "Edward Snowden",
       "Napoleon Bonaparte",
       "Teenie Weenie",
       "Greta Thunberg",
       "Naitsabes Sravi",
        "Lehcim Eilema",
        "Anul Nehoc",
        "Knabber die Maus"
    };
    int selection {};

    // show carrrots
    for (size_t i {}; i< max_names; i++) {
        std::cout << "(" << i+1 << ") ";
        for (size_t j {}; j < max_namelength; j++ ) {
            std::cout << names[i][j];
        }
        std::cout << std::endl;
   }    
    // Ask for Star Selection
    do {
        std::cout   << std::endl
                    << "Type in your selection: ";
        std::cin >> selection;
    } while ( !( (selection>=0) || (selection<max_namelength)) );
    std::cout    << std::endl 
                << "Your selection is: " 
                << names[selection-1] 
                << std::endl;
    

    return 0;
}
