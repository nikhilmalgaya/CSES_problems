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
    string n;
    cin >> n;

    unordered_map<char, int> m;

    for (int i = 0; i < n.length(); i++)
    {
        m[n[i]]++;
    }
    int flag = 0;
    for (auto it : m)
    {
        if (it.second % 2 != 0 && flag == 0)
        {
            flag = 1;
        }

        else if (it.second % 2 != 0 && flag == 1)
        {

            cout << "NO";
            break;
        }
    }

        return 0;
}
