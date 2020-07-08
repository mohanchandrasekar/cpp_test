#include <iostream>
#include <string.h>

void getSpeed();
int sum(int, int);
int main()
{
    int result = sum(10, 10);
    std::cout << "The sum is : " << result << "\n";
    getSpeed();
    return 0;
}

void getSpeed()
{
    std::cout << "Speed is : 80"
              << "Km/hr";
}

/*
 * Function with arguments
 */
int sum(int a, int b)
{
    return a + b;
}