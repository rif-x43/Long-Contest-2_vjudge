#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x[t], y[t];

    for (int i = 0; i < t; i++)
    {
        cin >> x[i] >> y[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (y[i] > x[i])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
