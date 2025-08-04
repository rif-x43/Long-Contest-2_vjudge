#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, flag = 0;
    cin >> n;
    int number[n];
    if (n > 0 && n < 100)
    {
        for (i = 0; i < n; i++)
        {
            cin >> number[i];
        }

        for (i = 0; i < n-1; i++)
        {
            if (number[i] >= 1 && number[i] <= 1000)
            {
                if (number[i] > number[i + 1])
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    if (flag==1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}