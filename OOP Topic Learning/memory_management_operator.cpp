// memory management operators
//  calloc,malloc(in c)
//  new,delete (in c++)

#include <bits/stdc++.h>
using namespace std;

struct name
{
    int roll;
    int age;
};

int main()
{
    // use of new
    int *a = new int[10]; // same as. int arr[10]; int*a=arr;

    // structure implementation part

    // struct name maruf;
    // struct name *person = &maruf;

    // code of line 17,18 in one line
    struct name *person = new struct name; /// pointer to a new structure object

    person->roll = 27;
    person->age = 21;
    cout << (*person).roll << " " << (*person).age << endl;
    cout << person->roll << " " << person->age << endl;
    delete []a;
    delete person;

    return 0;
}