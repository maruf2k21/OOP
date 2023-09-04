#include <bits/stdc++.h>
using namespace std;

class vec
{
    int size = 0;
    float arr[100000];

public:
    void pb(float n)
    {
        arr[size] = n;
        size++;
    }
    void pop_back()
    {
        size--;
    }
    void printVector()
    {
        cout << "The vector is : " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vec mark;
    cout << "Enter the size of vector: ";
    int n;
    cin >> n;
    cout << "Enter vector elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        mark.pb(value);
    }
    mark.printVector();
    mark.pop_back();
    mark.printVector();

    return 0;
}