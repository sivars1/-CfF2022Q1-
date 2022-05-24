#include<iostream>
#include<cmath>

int main () {
    int index {};

    // ask for number of elements for the floating point array
    std::cout   << "Please enter the number of floatingpoint array elements that should be allocated in the memory: ";
    std::cin    >> index;

    // now allocate the memory for the floating point values;
    double* floats_ptr {new double[index] {} };

    for (int i{}; i<index;i++) {
        *(floats_ptr+i)= 1.0/(i+1.0)/(i+1.0);
    }
    //print floats to terminal
    for (int i{}; i<index;i++){
        std::cout   << *(floats_ptr+i)    << "\t";
    }

    std::cout << std::endl  << "Compute Sum of all floating point elements:"    << std::endl
                << "Index"  << "\t" << "value" << "\t" << "sum" << std::endl;
    double sum {};
    for (int i{}; i<index;i++) {
        sum = sum + floats_ptr[i]; // here use array notation 
        // else would be :
        // sum = sum + *(floats_ptr+i);
        std::cout   << i    << "\t" << *(floats_ptr+i)  << "\t" << sum <<  std::endl;
        
    }

    std::cout   << "Multiply sum by six. Then compute square root: " << std::sqrt(6*sum);

    // GARBAGE COLLECTION
    delete[] floats_ptr; // freee space on the stack
    floats_ptr;         // point pointer to nullptr to avoid dangling pointer
}