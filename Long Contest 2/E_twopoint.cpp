// Unsolved
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, j, flag = 0;
    cin >> n >> x;
    int num[n];
    
    for (i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (num[i] + num[j] == x)
            {
                cout << i + 1 << j + 1 << endl;
                flag++;
                return 0;
            }
        }
    }

    if (flag == 0)
    {
        cout << "IMPOSSIBLE";
    }
}