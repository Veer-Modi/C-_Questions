#include <iostream>
#include <string>
using namespace std;

string checkEligibility(int age)
{
    if (age >= 18)
    {
        return "The person is eligible to vote.";
    }
    else
    {
        return "The person is not eligible to vote.";
    }
}

int main()
{
    int age = 25;
    cout << checkEligibility(age) << endl;
    return 0;
}