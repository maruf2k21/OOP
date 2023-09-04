#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5, i = 1;
    cout << n << " ";
    while (n < 50)
    {
        if (i == 1)
        {
            n = n - 1;
            i++;
            if (n >= 50)
                break;
            cout << n << " ";
        }
        else if (i == 2)
        {
            n = n - 2;
            i++;
            if (n >= 50)
                break;
            cout << n << " ";
        }
        else if (i == 3)
        {
            n = n + 5;
            i++;
            if (n >= 50)
                break;
            cout << n << " ";
        }
        else if (i == 4)
        {
            n = n + 4;
            i = 1;
            if (n >= 50)
                break;
            cout << n << " ";
        }
    }
}