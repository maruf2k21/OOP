#include <bits/stdc++.h>
using namespace std;

class String
{
    string s;

public:
    String() // default constructor
    {
    }
    String(string ss) // parameterized constructor
    {
        s = ss;
    }
    // void length()
    // {
    //     int len = s.size();
    //     cout << "Length = " << len << endl;
    // }
    // void display()
    // {
    //     cout << s << endl;
    // }
    friend String add(String s1, String s2);
    friend void display_obj(String s1);
};

String add(String s1, String s2)
{
    string temp = s1.s + s2.s;
    String ans(temp);
    return ans;
}

void display_obj(String s1)
{
    cout << "Output using object display : " << endl;
    cout << "length = " << s1.s.size() << endl;
    cout << "String = " << s1.s << endl;
}

int main()
{
    String s("Md Maruf "), x("Ur Rahman Munna");

    display_obj(s);
    // s.length();
    // s.display();

    display_obj(x);
    // x.length();
    // x.display();

    String full_name = add(s, x);
    display_obj(full_name);
    // full_name.length();
    // full_name.display();

    return 0;
}