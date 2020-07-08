#include <iostream>
#include <string>

int main()
{
    try
    {
        int a = 10;
        if (a > 10)
        {
            std::cout << "Its true "
                      << "\n";
        }
        else
        {
            throw "Wrong value";
        }
    }
    catch (const char *msg)
    {

        std::cerr << msg << '\n';
    }

    return 0;
}