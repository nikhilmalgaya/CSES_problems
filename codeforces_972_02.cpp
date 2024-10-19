#include <bits/stdc++.h>
using namespace std;
inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    // fast_io();

    int t;
    cin >> t;
    while (t--)
    {

        int n, m, q, l, j, b, k = 0;

        cin >> n >> m >> q >> j >> l >> b;
        if (l < j)
            swap(l, j);

        if (j < b && l < b)
        {
            k = n - max(j, l);
            cout << k << endl;
        }

        else if (j > b && l > b)
        {
            k = min(j, l) - 1;
            cout << k << endl;
        }

        else
        {

            int t = j + (l - j) / 2;

            k = min(abs(l - t), abs(j - t));

            cout << k << endl;
        }
    }
    return 0;
}
