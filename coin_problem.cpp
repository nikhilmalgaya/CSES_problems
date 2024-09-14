#include <bits/stdc++.h>
using namespace std;
inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main()
{
    fast_io();
    int n;
    cin >> n;

    while (n--)
    {
        // cout << "hello";
        int a, b;
        cin >> a >> b;

        if ((a + b) % 3 == 0)
        {
            if (min(a, b) * 2 >= max(a, b))
                cout << "YES\n";
            else
                cout << "NO\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
