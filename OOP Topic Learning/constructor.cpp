#include <bits/stdc++.h>
using namespace std;
// constructor is a special member function with the same name of the class
// default constructor
// parameterized constructor
// constructor overloading
// contructor with default argument
// copy constructor

class point
{
    int x, y;

public:
    point() // default contstructor because it has no argument
    {
        x = 0;
        y = 0;
    }
    point(int a, int b = 10) // contructor with default argument
    {
        x = a;
        y = b;
    }
    void printPoint();
};

void point::printPoint()
{
    cout << "point is = ( " << x << " , " << y << ")" << endl;
}

int main()
{
    point center;
    center.printPoint();
    point random(2, 5);
    random.printPoint();
    point ran(2);
    ran.printPoint();

    return 0;
}