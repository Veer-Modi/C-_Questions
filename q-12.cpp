#include <iostream>
using namespace std;

int addelemnt(int arr[], int size, int newelement)
{
    arr[size] = newelement;
    size++;
    return size;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    int size = 5;
    int newelement = 6;
    size = addelemnt(arr, size, newelement);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}