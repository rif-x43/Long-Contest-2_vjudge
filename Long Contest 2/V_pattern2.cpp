#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, i, j;
    cin >> n;
    m = (n / 2) + 1;

    for (i = 1; i <= m; i++)
    {
        for (j = 1; j <= m - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
    for (i = 1; i <= m - 1; i++)
    {
        for (j = 1; j <= i; j++)
            cout << " ";
        for (j = 1; j <= 2 * m - 2 * i -1; j++)
            cout << "*";
        cout << endl;
    }
}