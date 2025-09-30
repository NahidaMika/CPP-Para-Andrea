#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/* Multi line
    Comment
*/

int main() {
    //Array x[n]
    double a[] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    //Constants
    const int fj = 12;

    //Structures --> way to group several related variables into one place.
    struct {
        // int --> stores integers (whole numbers), without decimals, such as 123 or -123
        int ab = -100;
        // Strings --> stores text, such as "Hello World". String values are surrounded by double quotes
        string bc = "Hello World";
        // Double--> stores floating point numbers, with decimals, such as 19.99 or -19.99
        double cd = 1.999;
        // Char --> stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
        char de = 'H';
        // Bool -> Boolean --> true (1) or false (0)
        bool ef = true;
        // Reference --> reference variable is an alias for an existing variable. It is created using the & operator
        int &fg = ab;
        // Pointer --> stores the memory address as its value.
        int* ptr = &ab;
        /*
            string* mystring; // Preferred
            string *mystring;
s           tring * mystring;
        */

    } Info;
    
    std::cout << Info.ab << std::endl;
    std::cout << Info.fg << std::endl;
    std::cout << Info.ptr << std::endl;
    

    //Enums --> special type that represents a group of constants
    enum Level {
    LOW = 6,
    MEDIUM,
    HIGH
    };

    enum Level lvl = LOW;
    enum Level lvl1 = MEDIUM;
    enum Level lvl2 = HIGH;
    std::cout << lvl << std::endl;
    std::cout << lvl1 << std::endl;
    std::cout << lvl2 << std::endl;

    std::cout << "Bytes used by a[1]: ";
    std::cout << sizeof(a[1]) << std::endl;
    

};