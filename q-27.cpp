#include <iostream>
#include <string>
using namespace std;

string getFileExtension(const string &filename)
{
    size_t dotPos = filename.find_last_of('.');
    if (dotPos == string::npos)
    {
        return "";
    }
    return filename.substr(dotPos + 1);
}

string getFileExtensionRfind(const string &filename)
{
    size_t dotPos = filename.rfind('.');
    if (dotPos != string::npos && dotPos != 0)
    {
        return filename.substr(dotPos + 1);
    }
    return "";
}

int main()
{
    string filename = "document.pdf";
    cout << "Enter the filename: ";

    string extension = getFileExtension(filename);
    string extension2 = getFileExtensionRfind(filename);
    if (extension.empty())
    {
        cout << "No extension found." << endl;
    }
    else
    {
        cout << "File extension: " << extension << endl;
    }

    if (extension2.empty())
    {
        cout << "No extension2 found." << endl;
    }
    else
    {
        cout << "File extension2: " << extension2 << endl;
    }

    return 0;
}
