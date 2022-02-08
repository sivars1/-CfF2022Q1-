#include<iostream>
#include<iomanip>
#include<vector>
#include<array>

int main () {

    // Define and Initialize some Strings
    std::string full_name1; // declares the string object full_name1
    full_name1 = "Pipi Langstrumpf";  // assign full_name with the character in between the quotation marks!
    
    std::string full_name2 {"Prinzessin Irulan"}; // defines the string full_name2 and initialises it with "Prinzessin Irulan"

    std::string full_name3 {full_name1}; // declares the string full_name3 and initialis it with characters of the the string full_name1

    std::string full_name4 {full_name1,0,4}; // as above but takes only the first 4 characters of full_name1

    std::string full_name5 {full_name2,11,6}; // declares full_name5 as string and initialises it with six characters from the string full_name2 starting with its 12th character!

    std::string full_name6 {full_name2+" "+full_name1}; //declares full_name6 & initialises it with the character of full_name2 and full_name1

    std::string full_name7 {"Sir "}; // declares empty string object full_name7 
    full_name7.append(full_name2,0,10);
    full_name7.append(" ");
    full_name7.append(full_name1,5,11); // see for yourself!

    std::cout   << "full_name1: " << full_name1 << std::endl 
                << "full_name2: " << full_name2 << std::endl 
                << "full_name3: " << full_name3 << std::endl 
                << "full_name4: " << full_name4 << std::endl
                << "full_name5: " << full_name5 << std::endl 
                << "full_name6: " << full_name6 << std::endl
                << "full_name7: " << full_name7 << std::endl
                << std::endl;
    std::string your_name {};
    std::cout << "What is your name ?";
    std::cin >> your_name;
    std::cout << std::endl << "Your name is: " << your_name;
}