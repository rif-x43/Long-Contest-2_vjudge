// Unsolved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long nv, nq, i, j, res = 0;
    cin >> nv >> nq;
    long long a[nq], b[nq], v[nv];
    for (i = 0; i < nv; i++)
    {
        cin >> v[i];
    }
    for (i = 0; i < nq; i++)
    {
        cin >> a[i] >> b[i];
    }

    for (i = 0; i < nq; i++)
    {
        res = 0;
        int initial = a[i];
        int final = b[i];

        for (j = initial - 1; j <= final - 1; j++)
        {
            res = res + v[j];
        }

        cout << res << endl;
    }
}