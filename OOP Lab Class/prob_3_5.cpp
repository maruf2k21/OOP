#include <bits/stdc++.h>
using namespace std;

class election
{
    int vote;
    int candidate[6];

public:
    election()
    {
        for (int i = 0; i < 6; i++)
        {
            candidate[i] = 0;
        }
        cout << "Enter 1 to vote First Candidate" << endl;
        cout << "Enter 2 to vote Second Candidate" << endl;
        cout << "Enter 3 to vote Third Candidate" << endl;
        cout << "Enter 4 to vote Fourth Candidate" << endl;
        cout << "Enter 5 to vote Fifth Candidate" << endl;
    }
    void getVote()
    {
        cin >> vote;
    }
    void countVote()
    {
        if (vote == 1)
            candidate[vote - 1]++;
        else if (vote == 2)
            candidate[vote - 1]++;
        else if (vote == 3)
            candidate[vote - 1]++;
        else if (vote == 4)
            candidate[vote - 1]++;
        else if (vote == 5)
            candidate[vote - 1]++;
        else
            candidate[5]++;
    }
    void printElectionResult()
    {
        for (int i = 1; i <= 5; i++)
        {
            cout << i << "-th Candidate got " << candidate[i - 1] << " votes" << endl;
        }
        cout << "Total Spoiler votes = " << candidate[5] << endl;
    }
};

int main()
{
    int n;
    cout << "Enter Totatl Number of voter : " << endl;
    cin >> n;
    election upazilla;
    for (int i = 1; i <= n; i++)
    {
        cout << "Give your vote : " << endl;
        upazilla.getVote();
        upazilla.countVote();
    }
    upazilla.printElectionResult();

    return 0;
}