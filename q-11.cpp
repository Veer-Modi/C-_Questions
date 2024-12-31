#include <iostream>
using namespace std;

int removeDuplicate(int arr[], int size, int result[])
{
    int in = 0;
    for (int i = 0; i < size; i++)
    {
        bool flag = false;
        for (int j = 0; j < in; j++)
        {
            if (arr[i] == result[j])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            result[in] = arr[i];
            in++;
        }
    }
    return in;
}

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int len = sizeof(arr) / sizeof(arr[0]);
    int result[len];
    int newLen = removeDuplicate(arr, len, result);
    cout << "Original array: ";
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLen; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}