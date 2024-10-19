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

    int t;
    cin >> t;
    map<int, bool> m;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {

            cin >> a[i];
            m[a[i]] = true;
        }

        int max_el = INT_MIN;
        int operation = 0;

        for (int i = 0; i < n; i++)
        {

            if (m[a[i]] == false)
            {
                continue;
            }

            if (a[i] < max_el)
            {
                m[a[i]] = false;
                operation++;
            }
            max_el = max(max_el, a[i]);
        }
        cout << operation << endl;
    }
    return 0;
}
