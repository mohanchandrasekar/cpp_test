#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "Welcome" << endl;
    tzset("Mohan");
    return 0;
}

/*
* name test method will be very suitable for accessing the name of the string
*/
void tzset(string name)
{
    if (name.length() < 0)
    {
        cout << "Name is : " + name << endl;
    }
}