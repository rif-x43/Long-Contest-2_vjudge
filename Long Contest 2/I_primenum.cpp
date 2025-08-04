#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, isPrime = 0, n;
    cin >> n;
    if (n > 0 && n < 1000)
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = 1;
            }
        }

        if (isPrime == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
}