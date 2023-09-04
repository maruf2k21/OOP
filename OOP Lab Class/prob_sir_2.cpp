//sir prov 2
#include <bits/stdc++.h>
using namespace std;

class name
{
    string first, second;

public:
    name(string f, string s)
    {
        first = f;
        second = s;
    }
    void reverse()
    {
        string temp = first;
        first = second;
        second = temp;
        cout<<"hi "<<first<<endl;
    }
    void print()
    {
        cout<<first<<" "<<second<<endl;
    }
};

int main()
{
    name student("md ","maruf");
    student.reverse();
    student.print();
    return 0;
}