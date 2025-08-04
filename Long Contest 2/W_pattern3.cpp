#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, input, i, j;
    cin >> input;
    n = input + 1;

    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= i - 1; j++)
            cout << " ";
        for (j = 1; j <= n - (2 * i - 1); j++)
            cout << "*";
        cout << endl;
    }
    for (i = 1; i <= n / 2; i++)
    {
        for (j = 1; j <= n / 2 - i; j++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
            cout << "*";
        cout << endl;
    }
}