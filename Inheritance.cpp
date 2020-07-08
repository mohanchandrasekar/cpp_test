#include <iostream>
#include <string>
using namespace std;

class Base
{
public:
    string brand = "BMW";
    void getHonk();
};

class Person
{
public:
    int age;
    string name = "Mohan Chandrasekar";
};

void Base::getHonk()
{
    cout << "paaam paaam";
}
class Derived : public Base, public Person
{
public:
    string model = "x10";
};

int main()
{
    Derived obj;
    cout << obj.model;
    cout << obj.brand;
    cout << obj.name;
    return 0;
}