#include <iostream>
using namespace std;

void sumEvenOddDigits(int n, int &sumEven, int &sumOdd)
{
    sumEven = 0;
    sumOdd = 0;
    while (n > 0)
    {
        int digit = n % 10;
        if (digit % 2 == 0)
        {
            sumEven += digit;
        }
        else
        {
            sumOdd += digit;
        }
        n /= 10;
    }
}

void sumEvenOddDigitsRecursive(int n, int &sumEven, int &sumOdd)
{
    if (n == 0)
    {
        return;
    }
    int digit = n % 10;
    if (digit % 2 == 0)
    {
        sumEven += digit;
    }
    else
    {
        sumOdd += digit;
    }

    sumEvenOddDigitsRecursive(n / 10, sumEven, sumOdd);
}

int main()
{
    int n = 123456;
    cout << "Enter an integer: ";

    int sumEven, sumOdd;
    sumEvenOddDigits(n, sumEven, sumOdd);

    cout << "Sum of even digits: " << sumEven << endl;
    cout << "Sum of odd digits: " << sumOdd << endl;
    cout << endl;

    sumEvenOddDigitsRecursive(n, sumEven, sumOdd);

    cout << "Sum of even digits: " << sumEven << " Using Recursion" << endl;
    cout << "Sum of odd digits: " << sumOdd << " Using Recursion" << endl;

    return 0;
}