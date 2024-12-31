#include <iostream>
#include <string>
using namespace std;

string convertToUpperCase(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        result += toupper(str[i]);
    }
    return result;
}

string ctucASII(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            result += str[i] - 32;
        }
        else
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    string str = "Hello, World!";
    cout << convertToUpperCase(str) << endl;
    cout << ctucASII(str) << endl;
    return 0;
}