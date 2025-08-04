#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, m;
    cin >> n;
    m = (n / 2) + 1;

    for (i = 1; i <= n; i++)
    {
        if (i <= m)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == m + (i - 1) || j == m - (i - 1))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        else{
            for (j = 1; j <= n; j++)
            {
                if (j == 1 + (i - m) || j == n - (i - m))
                    cout << "*";
                else
                    cout << " ";
            }
        }

        cout << endl;
    }
}