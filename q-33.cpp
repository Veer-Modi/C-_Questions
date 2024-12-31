#include <iostream>
#include <string>
using namespace std;

void iscentury(int year)
{
    if (year % 100 == 0)
    {
        cout << "This is a century year" << endl;
    }
    else
    {
        cout << "This is not a century year" << endl;
    }
}

void iscenturybyTernery(int year)
{
    (year % 100 == 0) ? cout << "This is a century year" << endl : cout << "This is not a century year" << endl;
}

int main()
{
    int year = 2000;
    iscentury(year);
    iscenturybyTernery(year);
    return 0;
}