#include <iostream>
#include <string>

class Encapulation
{
private:
    int salary;

public:
    void setSalary(int salary);
    int getSalary();
};

int Encapulation::getSalary()
{
    return salary;
}

void Encapulation::setSalary(int s)
{
    salary = s;
}

int main()
{
    Encapulation object;
    object.setSalary(10001);
    std::cout << object.getSalary();
    return 0;
}