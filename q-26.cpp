#include <iostream>
#include <vector>
using namespace std;

bool checkLastElement(string str, char ch)
{
    if (str[str.length() - 1] == ch)
    {
        return true;
    }
    return false;
}

int main()
{
    string str = "codinggita";
    char ch = 'a';
    if (checkLastElement(str, ch))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }

    return 0;
}