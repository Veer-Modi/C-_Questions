#include <iostream>
using namespace std;

bool checksort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}

bool checksortop(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(ar) / sizeof(ar[0]);
    bool sort = checksort(ar, len);
    if (sort)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    bool sort2 = checksortop(ar, len);
    if (sort2)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}