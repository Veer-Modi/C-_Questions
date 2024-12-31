#include <iostream>
using namespace std;

void checknumber(int arr[], int size)
{
    int positive = 0;
    int negative = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            positive++;
        }
        else
        {
            negative++;
        }
    }
    cout << "positive numbers: " << positive << endl;
    cout << "negative numbers: " << negative << endl;
}

void countPositiveNegativeEasy(int arr[], int size)
{
    int positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < size; i++)
    {
        (arr[i] > 0) ? positiveCount++ : negativeCount++;
    }

    cout << "Positive count: " << positiveCount << endl;
    cout << "Negative count: " << negativeCount << endl;
}

int main()
{
    int ar[] = {1, -2, 3, -4, 5, -6};
    int len = sizeof(ar) / sizeof(ar[0]);

    checknumber(ar, len);
    countPositiveNegativeEasy(ar, len);
    return 0;
}