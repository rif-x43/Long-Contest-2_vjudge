#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, size;
    string s;
    cin >> s;

    size = s.length();
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == s[size - i - 1])
            count++;
    }

    if(count == size)
        cout << "Yes";
    else
        cout << "No";
}