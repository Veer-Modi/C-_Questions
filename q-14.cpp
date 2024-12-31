#include <iostream>
#include <vector>
using namespace std;

void addelement(int arr[], int size, int newel)
{
    int upsize = size + 1;
    int newarr[upsize];
    newarr[0] = newel;
    for (int i = 0; i < size; i++)
    {
        newarr[i + 1] = arr[i];
    }
    for (int i = 0; i < upsize; i++)
    {
        cout << newarr[i] << " ";
    }
    cout << endl;
}

void addElementByVector(vector<int> &arr, int newele)
{
    arr.insert(arr.begin(), newele);
    cout << "Updated Array ";
    for (int ar : arr)
    {
        cout << ar << " ";
    }
    cout << endl;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5};
    vector<int> array = {1, 2, 3, 4, 5};
    int len = sizeof(ar) / sizeof(ar[0]);
    int newe = 0;
    addelement(ar, len, newe);
    addElementByVector(array, newe);
    return 0;
}