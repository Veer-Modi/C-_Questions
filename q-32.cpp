#include <iostream>
#include <string>
using namespace std;

void categoryAge(int age)
{
    if (age < 13)
    {
        cout << "Child" << endl;
    }
    else if (age >= 13 && age <= 19)
    {
        cout << "Teenager" << endl;
    }
    else if (age >= 20 && age <= 59)
    {
        cout << "Adult" << endl;
    }
    else if (age >= 60)
    {
        cout << "Senior" << endl;
    }
    else
    {
        cout << "Invalid age" << endl;
    }
}

int main()
{
    int age = 30;
    categoryAge(age);
}