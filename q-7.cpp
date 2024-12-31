#include <iostream>
#include <string>
using namespace std;

string checkSignal(string light)
{
    if (light == "red")
    {
        return "stop";
    }
    else if (light == "yellow")
    {
        return "Slow down";
    }
    else
    {
        return "Go";
    }
}

int main()
{

    string signal = "green";
    string cklg = checkSignal(signal);

    cout << cklg << endl;

    return 0;
}