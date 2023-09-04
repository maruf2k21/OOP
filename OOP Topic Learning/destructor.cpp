#include <bits/stdc++.h>
using namespace std;

// dectructor never takes any argument and it does not return absy value;
class number
{
    int a;

public:
    number() // default constructor
    {
        a = 0;
    }
    number(int num) // parameterized constructor
    {
        a = num;
    }
    void display()
    {
        cout << "The number for the object is : " << a << endl;
    }
    ~number() // this is a destructor
    {
        cout << "Destructor is called" << endl;
    }
};

int main()
{
    number x, y(0), z(20),zz;
    z.display();

    return 0;
}