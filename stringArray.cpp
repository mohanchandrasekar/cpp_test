#include <iostream>
#include <string>

int main()
{

    std::string car[] = {"Volvo, LinkandCO, BMW, Benz"};

    for (size_t i = 0; i < sizeof(car); i++)
    {
        std::cout << "String array are : " << car[i];
    }

    return 0;
}