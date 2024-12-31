#include <iostream>
#include <string>
using namespace std;

string repeatString(string str, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += str;
    }
    return result;
}
string repeatStringbyAppend(string str, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result.append(str);
    }
    return result;
}

int main()
{
    string str = "Hello";
    int n = 3;
    cout << repeatString(str, n) << endl;
    cout << repeatStringbyAppend(str, n) << endl;
    return 0;
}