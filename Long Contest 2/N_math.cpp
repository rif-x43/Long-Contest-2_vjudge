#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, rem;
    cin >> x >> y;
    
    while (y != 0)
    {
        rem = x % y;
        swap(x,y);
        y = rem;
    }

    cout << x;
}