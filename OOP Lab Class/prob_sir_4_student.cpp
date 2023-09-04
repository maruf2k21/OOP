// Problem 4 (Given By Sir)
#include <bits/stdc++.h>
using namespace std;

class student
{
    string name, roll;
    int cls, sub;
    int marks[15] = {0};

public:
    // friend void grade();
    void getData()
    {
        cout << "Student Name: ";
        getline(cin, name);
        cout << "Class : ";
        cin >> cls;
        cout << "Roll : ";
        cin >> roll;
        cout << "Total Number of Subjects : ";
        cin >> sub;
        cout << "Enter marks for each subjects out of 100 marks: " << endl;
        for (int i = 0; i < sub; i++)
        {
            cout << "Subject " << i + 1 << " mark : ";
            cin >> marks[i];
        }
    }
    void grade()
    {
        int total = 0;
        for (int i = 0; i < sub; i++)
        {
            total += marks[i];
        }
        int avg = (total * 1.00 / sub);
        if (avg >= 80)
            cout << "Grade : A+" << endl;
        else if (avg >= 70)
            cout << "Grade : A" << endl;
        else if (avg >= 60)
            cout << "Grade : A-" << endl;
        else if (avg >= 50)
            cout << "Grade : B" << endl;
        else if (avg >= 40)
            cout << "Grade : C" << endl;
        else if (avg >= 33)
            cout << "Grade : D" << endl;
        else
            cout << "Grade : F (fail)" << endl;
    }
    void printData()
    {
        cout << "Student Name: " << name << endl;
        cout << "Class : " << cls << endl;
        cout << "Roll : " << roll << endl;
        grade();
    }
};

int main()
{
    student maruf;
    maruf.getData();
    maruf.printData();

    return 0;
}