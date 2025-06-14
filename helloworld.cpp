#include <iostream>

int main(){
    //Just testing some c++ features
    /*
        And some of them are the comments :)
    */
    std::cout << "Hello world... Yeah, I guess that's it" << '\n';
    std::cout << "Did I jump the line?" << '\n';

    //**************************************************************************************************************//

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

    //**************************************************************************************************************//
    
    //Let's learn about constants... we can't change them!!!
    const double PI = 3.14159; //It's convention that constants go UPPER CASE
    std::cout << "Pi = " << PI << '\n';

    //**************************************************************************************************************//
    
    //Accepting user inputs
    //cout << (insertion operator)
    //cin >> (extraction operator)

    std::string user_name;
    int user_age;

    //std::cout << "What's your name? Type it in here: ";
    //std::cin >> user_name;
    //std::cout << "Well, hello, " << user_name << '\n';

    //The problem with the 'cin' keyword is that you can't type a string that has spaces on it
    //In this case we can use the getline function
    std::cout << "Whats' your full name? ";
    std::getline(std::cin, user_name);

    std::cout << "And what's your age? ";
    std::cin >> user_age;
    std::cout << "Hello, " << user_name << ", you're " << user_age << " years old" << '\n';

    //We can also use
    //std::cin >> std::ws
    //Inside a getline function in order to eliminate any white space/new line characters in the buffer

    //**************************************************************************************************************//
    
    //

    return 0;
}