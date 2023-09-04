// Text Book Practice Problem 4.9
#include <bits/stdc++.h>
using namespace std;

class calculate
{
    double base, height, radius, ans, flag = 0;

public:
    void printArea()
    {
        if (flag == 1)
            cout << "The area of circle  is = " << ans << endl;
        else
            cout << "The area of triangle  is = " << ans << endl;
    }
    void area(double r)
    {
        radius = r;
        ans = 3.1416 * radius * radius;
        flag = 1;
        printArea();
    }
    void area(double b, double h)
    {
        base = b;
        height = h;
        ans = 0.5 * base * height;
        printArea();
    }
};

int main()
{
    calculate geometry;
    geometry.area(2);
    geometry.area(2, 10);

    return 0;
}