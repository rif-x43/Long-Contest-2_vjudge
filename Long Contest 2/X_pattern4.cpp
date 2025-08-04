#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n;
    m = (n / 2) + 1;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i || j >= n - i + 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    for (i = m - 1; i >= 1; i--)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i || j >= n - i + 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }
}