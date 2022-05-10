#include <iostream>
#include <string>

struct Pupil {
    std::string name;
    std::string family_name;
    int age;

    //Constructor! needed to initialize Data
    Pupil(std::string input_name, std::string input_family_name, int input_age) {
        age=input_age;
        name=input_name;
        family_name=input_family_name;
    }
};

int main() {

    //constructor method to initialize struct data
    Pupil p1=Pupil("Xena","Sjidova",19);
    Pupil p2=Pupil("Anton","Gorodetzkij",38);
    Pupil p3=Pupil("Tanya","Degerov",11);

    // print the  struct data of Pupil p2 by accessing each variable separate
    std::cout << "print the  struct data of each Pupil  by accessing each variable separate. " << std::endl;
    std::cout << "Name: " << p1.name << " " << p1.family_name << " " << "Age: " << p1.age << std::endl;

    // print the  struct data of Pupil p2 by accessing each variable separate
    std::cout << "Name: " << p2.name << " " << p2.family_name << " " << "Age: " << p2.age << std::endl;

    // print the  struct data of Pupil p2 by accessing each variable separate
    std::cout << "Name: " << p3.name << " " << p3.family_name << " " << "Age: " << p3.age << std::endl;
 
}