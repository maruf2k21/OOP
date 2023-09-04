#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
    friend Complex add(Complex, Complex);
};

Complex add(Complex x, Complex y)
{
    Complex sum;
    sum.setNumber(x.a + y.a, x.b + y.b);
    return sum;
}

int main()
{
    Complex c1, c2;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);
    c1.printNumber();
    c2.printNumber();
    Complex result = add(c1, c2);
    result.printNumber();
}
