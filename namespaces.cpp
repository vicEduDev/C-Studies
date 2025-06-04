#include <iostream>

namespace victor{
    std::string name = "Victor";
}

namespace dayna{
    std::string name = "Dayna";
}

int main(){
    //We can work with namespaces using the USING keyword lol
    using namespace victor;
    std::cout << name << '\n';

    //Or we can do it with the SCOPE RESOLUTION OPERATOR (::)
    std::cout << dayna::name << '\n';

    /*
        Also, talking about the 'using namespace...' thing,
        we can write the line 'using namespace std' in the beginning of our method/function, so we can...:

            using namespace std;

            cout << "We can do this... but it's considered CRIME!!" << '\n';

        It's safer to do it this way:
            
            using namespace std::cout;

            cout << "Now it's better :)" << '\n';
    */
    return 0;
}