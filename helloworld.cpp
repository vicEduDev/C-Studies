#include <iostream>

int main(){
    //Just testing some c++ features
    /*
        And some of them are the comments :)
    */
    std::cout << "Hello world... Yeah, I guess that's it" << '\n';
    std::cout << "Did I jump the line?" << '\n';

    //Let's declare some variables
    //Int variables
    int x; //Yeah, we've declared
    x = 5; //Now, we've given it some value
    std::cout << x << '\n';

    //Dobule variable
    double dec_num = 1.5;
    double dec_num_yes = 2.345;
    std::cout << dec_num << '\n';
    std::cout << dec_num_yes << '\n';

    //Single Character variable
    char letter = 'V';
    std::cout << letter << '\n';
    
    //Boolean variable
    bool state = false;
    std::cout << state << '\n';

    //String 'variable' (It's technically an object)
    std::string name = "Victor";
    std::cout << name << '\n';

    return 0;
}