#include <iostream>
#include <string>
using namespace std;

class String
{
public:
    int *age;
    String(int);
    ~String(); 
};

String::~String()
{
    delete age;
}
String::String(int age)
{
    cout << age;
}

int main()
{
    String _string(10);

    char *pValue = NULL;

    pValue = new char[20];

    delete[] pValue;

    return 0;
}