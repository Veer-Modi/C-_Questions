#include <iostream>
#include <string>
using namespace std;

void checkVowels(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o')
    {
        cout << "The given character is Vowel." << endl;
    }
    else
    {
        cout << "The given character is Consonent." << endl;
    }
}

int main()
{
    char ch = 'A';
    checkVowels(ch);
    return 0;
}