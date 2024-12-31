#include <iostream>
#include <string>
using namespace std;

string concate(string str1, string str2)
{
    return str1 + str2;
}

string concatenateManual(string str1, string str2)
{
    for (int i = 0; i < str2.length(); i++)
    {
        str1 += str2[i];
    }
    return str1;
}

int main()
{
    string str1 = "Hello ";
    string str2 = "World";
    cout << concate(str1, str2) << endl;
    cout << concatenateManual(str1, str2) << endl;
    return 0;
}