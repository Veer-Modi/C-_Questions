#include <iostream>
using namespace std;

int checkLargestNumber(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

int checkLargestNumberternery(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a = 10, b = 20;
    cout << "Largest number is: " << checkLargestNumber(a, b) << endl;
    cout << "Largest number is: " << checkLargestNumberternery(a, b) << " Using Ternary" << endl;

    return 0;
}