#include <iostream>
#include <istream>
#include <string>

int main()
{
    int number;

    std::string name = "Mohan";

    name = name + "Chandrasker";

    std::string lastname;

    int length = name.length();

    std::cout << "length is : " << length;

    std::cout << "The String is : " << name[10];

    std::cout << "Enter the new name";

    std::cin >> lastname;
    
    return 0;
}