#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, T;
    int hattrick = 0;
    cin >> T;
    string balls[6];
    string print[T];
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < 6; j++)
        {
            cin >> balls[j];
        }

        for (j = 0; j <= 3; j++)
        {
            hattrick = 0;
            if (balls[j] == "W" && balls[j + 1] == "W" && balls[j + 2] == "W")
            {
                hattrick = 1;
                break;
            }
        }

        if (hattrick == 1)
        {
            print[i] = "YES";
        }
        else
        {
            print[i] = "NO";
        }
    }

    for (i = 0; i < T; i++)
    {
        cout << print[i] << endl;
    }
}