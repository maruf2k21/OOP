// reference variavble is the alternative name of the refered variable
#include <bits/stdc++.h>
using namespace std;

struct student
{
    int roll;
    int cls;
};

int main()
{
    int x = 10;
    int &ref = x; // here ref is an alternative name of variable x
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;
    // chaning x by calling ref
    ref = 10 + 90;
    cout << "x = " << x << endl;
    cout << "ref = " << ref << endl;

    // reference variable for coustom data type

    struct student maruf;
    struct student &munna = maruf;
    munna.roll = 5;
    munna.cls = 8;
    cout << maruf.cls << endl;
    cout << maruf.roll << endl;

    return 0;
}