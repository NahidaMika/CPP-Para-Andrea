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

    //Structures
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
    };

    //Enums
    enum Level {
    LOW,
    MEDIUM = 10,
    HIGH
    };

    enum Level lvl = LOW;
    

};