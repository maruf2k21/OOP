#include <bits/stdc++.h>
using namespace std;

class result
{
    int physics, math, chemistry;

public:
    result(int p, int m, int ch)
    {
        physics = p;
        math = m;
        chemistry = ch;
    }
    void printdata()
    {
        cout << "Physics = " << physics << endl
             << "Math = " << math << endl
             << "Chemistry = " << chemistry << endl;
    }
};

int main()
{
    result maruf(90,77,69);
    maruf.printdata();

    return 0;
}