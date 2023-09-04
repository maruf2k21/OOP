#include <bits/stdc++.h>
using namespace std;

// forward declaration
class Complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
};

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
    // making a function from other class as friend to this class
    // friend int calculator::sumRealComplex(Complex, Complex);
    friend class calculator;
};

int calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 id = " << res << endl;
    return 0;
}
