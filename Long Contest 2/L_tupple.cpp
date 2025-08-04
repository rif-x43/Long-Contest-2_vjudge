// Internal Error
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, res, a, b, c;

    cin >> n;

    if (n % 3 == 0)
    {
        res = n / 3;
        a = res;
        b = res;
        c = res;
        cout << a << " " << b << " " << c;
    }
    else if (n % 3 == 1)
    {
        res = n / 3;
        a = res;
        b = res;
        c = res + 1;
        cout << a << " " << b << " " << c;
    }
    else
    {
        res = n / 3;
        a = res;
        b = res + 1;
        c = res + 1;
        cout << a << " " << b << " " << c;
    }
}