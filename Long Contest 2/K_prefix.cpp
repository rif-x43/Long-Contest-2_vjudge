#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, num, queries, a, b;
    cin >> num >> queries;

    long long prefix_sum[num];
    long long res[queries];
    long long x;

    for (i = 1; i <= num; ++i)
    {
        cin >> x;
        prefix_sum[i] = prefix_sum[i-1] + x;
    }

    for (i = 0; i < queries; ++i)
    {
        cin >> a >> b;
        res[i] = prefix_sum[b] - prefix_sum[a-1];
    }

    for (i = 0; i < queries; ++i)
    {
        cout << res[i] << endl;
    }
}
