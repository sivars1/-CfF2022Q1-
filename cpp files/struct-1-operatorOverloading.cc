#include <iostream>
#include <string>

struct Pupil {
    std::string name;
    std::string family_name;
    int age;

    Pupil(std::string input_name, std::string input_family_name, int input_age) {
        age=input_age;
        name=input_name;
        family_name=input_family_name;
    }
};

std::ostream& operator<<(std::ostream& operand_cout, Pupil& operand_pupil){
    operand_cout << "Name: " << operand_pupil.name << " " << operand_pupil.family_name << " ";
    operand_cout << "Age: " << operand_pupil.age << std::endl;
    return operand_cout;
}

int main() {

    //Declare and initialize some Pupil data
    // using the constructor function!
    Pupil p1=Pupil("Xena","Sjiodova",19);
    Pupil p2=Pupil("Anton","Gorodetzkij",18);
    Pupil p3=Pupil("Tanya","Degerov",11);

    // print the  struct data of Pupil p2 by accessing each variable separate
    std::cout << "## Print the  struct data of Pupil p2 by accessing each variable separate. " << std::endl;
    std::cout << "Name: " << p2.name << " " << p2.family_name << " " << "Age: " << p2.age << std::endl;
 
    // now do the same by utilizing the overloaded <<-Operator for std::cout
    std::cout << "## Now do the same by utilizing the overloaded <<-Operator for std::cout and print all Pupil data elements." << std::endl;
    std::cout << p1 << p2 << p3;
}