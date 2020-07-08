#include <iostream>
#include <string>
using namespace std;

int main()
{
    double *pValue = NULL;

    pValue = new double;

    *pValue = 1000;

    cout << *pValue;

    delete pValue;

    return 0;
}