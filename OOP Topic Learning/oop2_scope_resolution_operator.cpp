// scope resolution operator is used to identify the member function of the classes
#include <bits/stdc++.h>
using namespace std;

int value = 100;

// to define a function outside a class
// to access a class's static variable
class A
{
public:
    static int x;

public:
    // only function declaratio
    void fun();
};

void A::fun() // difining a function outside class A
{
    cout << "fun() called";
}

int A::x = 10;
int main()
{
    int value = 10;
    cout << "value in main() = " << value << endl;
    {
        int value = 20;
        cout << "value inside scope = " << value << endl;
        cout << "global value inside scope = " << ::value << endl;
    }
    cout << "global value inside main = " << ::value << endl;
    int x = 50;
    cout << "x in main = "<< x << endl;
    cout << "static x in class A ="<< A::x << endl;
    return 0;
}