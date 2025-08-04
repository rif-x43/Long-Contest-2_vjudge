#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    int a[t], m[t];

    for (int i = 0; i < t; i++)
    {
        cin >> a[i] >> m[i];
    }

    for (int i = 0; i < t; i++)
    {
        if (a[i] < 50)
            cout << 'Z' << endl;
        else
        {
            if (m[i] < 50)
            {
                cout << "F" << endl;
            }
            else
            {
                cout << "A" << endl;
            }
        }
    }
}
