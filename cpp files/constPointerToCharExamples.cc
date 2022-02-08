#include<iostream>

int main () {
    const char* p_name_1 {"Knabber die Maus"};
    const char* p_name_2 {"Lady Wimble Bee"};
    const char* p_name_3 {"Lady Liras und Ihre Leibeigenen"};
    const char* p_name_4 {"Hen Wen das Orakelschwein"};
    const char* p_name_5 {"Leo the Brain"};
    const char* p_name_6 {"Lillie Leinenfee"};
    const char* p_name_7 {"Camina Drummer"};
    const char* p_name_8 {"Lady Eboshi"};
    const char* p_text_1 {"Your lucky star is: "};
    const char* p_text_2 {"See You!"};
    size_t choice {0};
    
    
    while (choice!=9) {
        std::cout << "Pick your favorite bad ass character from 1-8! ('9' to quit): ";
        std::cin >> choice;
        switch (choice) {
            case 1: std::cout << p_text_1 << p_name_1 << "." << std::endl;break;
            case 2: std::cout << p_text_1 << p_name_2 << "." << std::endl;break;
            case 3: std::cout << p_text_1 << p_name_3 << "." << std::endl;break;
            case 4: std::cout << p_text_1 << p_name_4 << "." << std::endl;break;
            case 5: std::cout << p_text_1 << p_name_5 << "." << std::endl;break; 
            case 6: std::cout << p_text_1 << p_name_6 << "." << std::endl;break;
            case 7: std::cout << p_text_1 << p_name_7 << "." << std::endl;break;
            case 8: std::cout << p_text_1 << p_name_8 << "." << std::endl;break; 
            default: std::cout << "Wrong input. Sorry you are out of luck!" << std::endl;
        }
    }
    std::cout << p_text_2;
}