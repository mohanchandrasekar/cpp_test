#include <iostream>
#include <string>

int main()
{

    std::string name = "Mohan";
    std::string &field = name;
    std::string *ptr = &field;

    // std::string* pointer = name;

    std::cout << "Value is name " << name << "\n";

    std::cout << "Value is field " << field << "\n";

    std::cout << "The reference is " << &field << "\n";

    std::cout << "The value is : " << *ptr << "\n";

    std::cout << "the value is : " << ptr << "\n";

    return 0;
}