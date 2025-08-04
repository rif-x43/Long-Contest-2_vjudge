#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, p, rem;
    cin >> w >> p;

    if (p > 0 && p < 100 && w>p)
    rem = w % p;

    cout << rem;
}