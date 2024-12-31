#include <iostream>
#include <string>
using namespace std;

string removeWhitespace(string str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    string str = " Hello, World! ";
    cout << removeWhitespace(str) << endl;
    return 0;
}