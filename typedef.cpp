#include <iostream>

//We can use the typedef keyword in order to to change the type name of a variable
//It's a convention to insert a _t at the end of a typedef alias

typedef std::string text_t; 
typedef int number_t;

//But it's recommended to use the USING keyword instead of typedef
using decimal_t = double;

int main(){
    text_t name = "Victor Eduardo";
    number_t age = 22;
    decimal_t money = 1000.99;

    std::cout << name << " is " << age << " years old and has " << money << " dollars!!";

    return 0;
}