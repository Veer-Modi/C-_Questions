#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void firstandlast(int arr[], int n)
{
    int first = arr[0];
    int last = arr[n - 1];
    cout << first << "," << last << endl;
}

void firstandlastbyvector(vector<int> arr)
{
    cout << arr.front() << "," << arr.back() << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ar = {1, 2, 3, 4, 5};

    firstandlast(arr, n);
    firstandlastbyvector(ar);
}