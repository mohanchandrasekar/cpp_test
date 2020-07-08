#include <iostream>
#include <string.h>

int main()
{

    std::string name = "Mohan";
    std::string *ptr = &name;

    std::cout << name << "\n";
    std::cout << *ptr << "\n";

    *ptr = "Chandrasekar";

    std::cout << ptr << "\n";
    std::cout << *ptr << "\n";

    return 0;
}