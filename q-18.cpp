#include <iostream>
using namespace std;

void printevenindex(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i];
            if (i < size - 2)
            {
                cout << ", ";
            }
        }
    }
    cout << "]" << endl;
}

int main()
{
    int ar[] = {10, 20, 30, 40, 50};
    int len = sizeof(ar) / sizeof(ar[0]);
    printevenindex(ar, len);
    return 0;
}