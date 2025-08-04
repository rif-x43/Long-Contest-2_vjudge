#include <bits/stdc++.h>
using namespace std;

int main()
{
    int child, choc, buy, rem;
    
    cin >> child >> choc;
    if (child > 0 && child <= 150)
    {
        if (choc > 0 && choc <= 150)
        {
            rem = choc % child;
            buy = child - rem;
        }
    }

    cout << buy;
    
}