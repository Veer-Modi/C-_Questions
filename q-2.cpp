#include <iostream>
#include <string>
using namespace std;

void checkNumber(int num)
{
    if (num > 0)
    {
        cout << "The number is positive" << endl;
    }
    else if (num < 0)
    {
        cout << "The number is negative" << endl;
    }
    else
    {
        cout << "The number is zero" << endl;
    }
}

int main()
{
    int num = 5;
    checkNumber(num);
    return 0;
}