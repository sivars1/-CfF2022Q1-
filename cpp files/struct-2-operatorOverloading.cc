#include <iostream>
#include <string>
#include <vector>

struct Pupil {
    std::string name;
    std::string family_name;
    int age;

    // Constructor! Yeah Baby!
    Pupil(std::string input_name, std::string input_family_name, int input_age) {
        age=input_age;
        name=input_name;
        family_name=input_family_name;
    }
};

std::ostream& operator<<(std::ostream& operand_ostream, Pupil& operand_pupil) {
    // print the data
    std::cout << "Name: " << operand_pupil.name << " " << operand_pupil.family_name << " Age: " << operand_pupil.age << std::endl;
  return operand_ostream;
}

/*
CollectionOfPupils& operator+=(CollectionOfPupils& operand_CollectionOfPupils, Pupil& operand_pupil) {
    operand_CollectionOfPupils.push_back(operand_pupil);
    return operand_CollectionOfPupils;
}*/

int main() {

    Pupil p1=Pupil("Xena","Sjiodova",19);
    Pupil p2=Pupil("Anton","Gorodetzkij",18);
    Pupil p3=Pupil("Tanya","Degerov",11);

    // print the  struct data of Pupil p2 by accessing each variable separate
    std::cout << "### Print the  struct data of Pupil p2 by accessing each variable separate. " << std::endl;
    std::cout << "name: " << p2.name << " " << p2.family_name << std::endl << "Age: " << p2.age << std::endl;

    // "One Vector of Pupils to store them all.""
    // "Gotta catch them all!"
    std::vector<Pupil> myCollectionOfPupils;
    myCollectionOfPupils.push_back(p1);
    myCollectionOfPupils.push_back(p2);
    myCollectionOfPupils.push_back(p3);

    // print the names of all members of the pupil list
    std::cout << "### print the names of all members of the pupil list." << std::endl;
    for (size_t i {}; i<myCollectionOfPupils.size(); i++) {
        std::cout << "Name: " << myCollectionOfPupils.at(i).name << " " << myCollectionOfPupils.at(i).family_name << " Age: " << myCollectionOfPupils.at(i).age << std::endl;
    }
    
    // std::cout << myCollectionOfPupils.at(1).name;   
    std::cout << std::endl;

    //test the overloaded <<-operand for cout and Pupil struct data
    std::cout << "### test the overloaded <<-operand for cout and Pupil struct data" << std::endl;
    std::cout << p1 << p2 << p3 << std::endl;

}