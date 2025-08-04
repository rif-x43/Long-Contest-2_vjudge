#include <bits/stdc++.h>
using namespace std;

int main()
{
    int max, sum, x, y, z, count = 0;
    cin >> max >> sum;

    for (x = 0; x <= max; x++)
    {
        if (x > sum)
            break;
        for (y = 0; y <= max; y++)
        {
            if (x + y > sum)
                break;
            z = sum - x - y;
            if (z >= 0 && z <= max)
            {
                count++;
            }
        }
    }

    cout << count;
}