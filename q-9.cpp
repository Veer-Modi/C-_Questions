#include <iostream>
#include <algorithm>
using namespace std;

void sortarr(int arr[], int size)
{
    sort(arr, arr + size);
}

int main()
{
    int nums[] = {4, 2, 8, 5, 1};
    int len = sizeof(nums) / sizeof(nums[0]);
    sortarr(nums, len);
    for (int i = 0; i < len; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}