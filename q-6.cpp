#include <iostream>
#include <string>
using namespace std;

string checkLogin(string username, string password)
{
    if (username == "admin" && password == "1234")
    {
        return "Login Successfull";
    }
    else
    {
        return "Login failed check weather username and password is correct";
    }
}

int main()
{
    string username = "admin";
    string password = "1234";
    cout << checkLogin(username, password) << endl;
    return 0;
}