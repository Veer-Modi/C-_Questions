#include <iostream>
using namespace std;

int checkEvenOdd(int arr[], int size)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
}

int main()
{

    int ar[] = {1, 2, 3, 4, 5};
    int len = sizeof(ar) / sizeof(ar[0]);
    checkEvenOdd(ar, len);

    return 0;
}