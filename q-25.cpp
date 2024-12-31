#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void stringToArray(string str)
{
    int start = 0;
    int length = str.length();

    for (int i = 0; i < length; i++)
    {
        if (str[i] == ' ' || ispunct(str[i]))
        {
            if (i > start)
            {
                cout << "'" << str.substr(start, i - start) << "', ";
            }
            start = i + 1;
        }
    }

    if (start < length)
    {
        cout << "'" << str.substr(start) << "'" << endl;
    }
    cout << endl;
}

int main()
{
    string inputString = "Hello world, welcome to JavaScript!";
    cout << "Words: ";
    stringToArray(inputString);
    return 0;
}