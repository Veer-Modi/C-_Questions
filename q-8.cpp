#include <iostream>
#include <string>
using namespace std;

int avg(int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    int len = sizeof(ar) / sizeof(ar[0]);
    int av = avg(ar, len);
    cout << av << endl;
    return 0;
}