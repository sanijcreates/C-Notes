#include <iostream>
// String is not an in-built data type. So, we have to import it. 
#include <string>
using namespace std;

int main() {
    // this is just initializing/declaring a Structure. This doesn't allot any memory in the storage. 
    struct Person
    {
        // we always have to end the declaraion of a variable with a semi-colon
        string name;
        int age;
        float salary;
    };
    // this is how you define a structure.
    Person sanij;
    sanij.age = 20;
    // if you haven't given any value to a variable of a structure, it will show a random value
    cout << sanij.age;  
}