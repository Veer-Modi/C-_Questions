#include <iostream>
using namespace std;

bool checknum(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int n = 3;
    int len = sizeof(ar) / sizeof(ar[0]);

    if (checknum(ar, len, n))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}