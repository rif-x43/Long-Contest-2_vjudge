#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y;

    if (x >= 0 && y >=0 && x + y <= 7)
    {
        z = 7 - x - y;
        cout << z;
    }
    
}