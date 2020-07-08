#include <iostream>

int addition(int a, int b);
int main()
{
    int result = addition(10, 10);
    std::cout << "THe result is : " << result;
    return 0;
}

int addition(int a, int b)
{
    int value;
    value = a + b;
    return value;
}
