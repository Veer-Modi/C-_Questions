#include <iostream>
using namespace std;

int diff(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return max - min;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 50};
    int len = sizeof(ar) / sizeof(ar[0]);

    int dif = diff(ar, len);
    cout << dif << endl;
    return 0;
}