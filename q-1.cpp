#include <iostream>
#include <string>
using namespace std;

string checkGrade(int marks)
{
    if (marks >= 80 && marks <= 100)
    {
        return "Grade A";
    }
    else if (marks >= 60 && marks < 80)
    {
        return "Grade B";
    }
    else if (marks >= 40 && marks < 60)
    {
        return "Grade C";
    }
    else if (marks >= 20 && marks < 40)
    {
        return "Grade D";
    }
    else
    {
        return "Grade F";
    }
}

int main()
{
    int marks = 35;
    cout << checkGrade(marks) << endl;
}