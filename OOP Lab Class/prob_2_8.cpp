#include <bits/stdc++.h>
using namespace std;

class AsciiValue
{
    char ch;

public:
    AsciiValue()
    {
        cout << "Enter any character to see its Ascii value : ";
        cin >> ch;
    }
    void print_ascii()
    {
        cout << "Ascci of character " << ch << " is = " << (int)ch << endl;
    }
};

int main()
{
    AsciiValue character;
    character.print_ascii();

    return 0;
}