#include <iostream>
#include <vector>
using namespace std;

void removeElement(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int ar[] = {1, 2, 3, 4, 5};
    int len = sizeof(ar) / sizeof(ar[0]);
    vector<int> num = {1, 2, 3, 4, 5};
    num.pop_back();
    for (int nu : num)
    {
        cout << nu << " ";
    }
    cout << endl;
    removeElement(ar, len);

    return 0;
}