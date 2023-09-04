#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6 + 123;
int isPrime[mx];
void sieve(int num = mx)
{
    isPrime[0] = 1; // 1 means not prime
    isPrime[1] = 1;
    for (int i = 2; i * i <= num; i++)
    {
        if (isPrime[i] == 0)
        {
            for (int j = i + i; j <= num; j = j + i)
            {
                isPrime[j] = 1;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    for (int i = n; i >= 2; i--)
    {
        if (isPrime[i] == 0 && isPrime[i - 2] == 0)
        {
            cout << i << " " << i - 2 << endl;
            break;
        }
    }

    return 0;
}