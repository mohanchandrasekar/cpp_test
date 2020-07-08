#include <iostream>
#include <string>

typedef int name;
void sample();

int main()
{

    enum fruits
    {
        APPLE,
        ORANGE,
        BERRY
    };
    name _name;

    fruits VP = APPLE;

    if (APPLE == VP)
    {
        std::cout << "The value is : "
                  << APPLE << "\n";
    }

    sample();
    return 0;
}

void sample()
{
    std::cout << " Welcome to sample method";
}
