#include <iostream>
#include <string>
using namespace std;

int checkLength(string str)
{
    int len = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str.length())
        {
            len++;
        }
    }
    return len;
}

int findLengthManual(string str)
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int findLengthIterators(string str)
{
    return distance(str.begin(), str.end());
}

int main()
{
    string str = "Hello, World!";
    cout << checkLength(str) << endl;
    cout << "Length (Brute Force): " << findLengthManual(str) << endl;
    cout << findLengthIterators(str) << endl;
    return 0;
}