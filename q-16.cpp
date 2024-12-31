#include <iostream>
#include <vector>
using namespace std;

bool checkpositive(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 0)
        {
            return false;
        }
    }
    return true;
}

bool usingflag(int arr[], int size)
{
    bool ispositive = true;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= 0)
        {
            ispositive = false;
            break;
        }
    }
    return ispositive;
}

int main()
{
    int ar[] = {3, 5, 9, 1, 7};
    int len = sizeof(ar) / sizeof(ar[0]);
    if (checkpositive(ar, len))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    if (usingflag(ar, len))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}