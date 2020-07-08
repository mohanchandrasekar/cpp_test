#include <iostream>
#include <string>
using namespace std;

void myFunction(string country = "Norway")
{
    cout << country << "\n";
}

void myName(string lName, int age)
{
    cout << lName << age << endl;
}

int main()
{
    myName("Mohan", 10);
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    return 0;
}
