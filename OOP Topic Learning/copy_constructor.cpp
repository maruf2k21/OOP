#include <bits/stdc++.h>
using namespace std;

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
    // when no copy constructor is found , compiler supplies its own copy constructor
    number(number &obj) // copy constructor
    {
        cout << "Copy constructor is called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for the object is : " << a << endl;
    }
};

int main()
{
    number x, y(0), z(20), z2;
    x.display();
    y.display();
    z.display();
    number maruf(z); // copy constructor invoked
    maruf.display(); // will diplay copy constructor is called
    z2 = z;          // copy constructor not called ..compiler uses its own copy constructor
    z2.display();
    number z3 = z; // copy constructor is called
    z3.display();  // will diplay copy constructor is called

    return 0;
}