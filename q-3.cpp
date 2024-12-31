#include <iostream>
#include <string>
using namespace std;

void checkSides(int s1, int s2, int s3)
{
    if (s1 == s2 && s2 == s3 && s1 == s3)
    {
        cout << "The Triangle is Equilateral." << endl;
    }
    else if (s1 == s2 || s2 == s3 || s3 == s1)
    {
        cout << "The Triangle is Isosceles." << endl;
    }
    else
    {
        cout << "The Triangle is Scalene." << endl;
    }
}

int main()
{
    int side1 = 2, side2 = 4, side3 = 4;
    checkSides(side1, side2, side3);
    return 0;
}