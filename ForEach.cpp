#include <iostream>

#include <string>
using namespace std;
int main()
{
    int values[] = {1, 2, 3, 4, 5};
    for (auto i : values)
    {
        std::cout << i << "\n";
    }

    return 0;
}