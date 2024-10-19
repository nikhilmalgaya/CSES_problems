#include <bits/stdc++.h>
using namespace std;

long long find_mis(long long n, vector<int> v)
{
    long long a = 0;

    for (long long i = 1; i <= n; i++)
    {
        a ^= i;
    }

    for (auto i : v)
    {
        a ^= i;
    }

    return a;
}

int main()
{
    long long q;
    cin >> q;
    vector<int> v(q - 1);

    for (int i = 0; i < q - 1; i++)
    {
        long long n;
        cin >> n;
        v[i] = n;
    }

    long long a = find_mis(q, v);
    cout << a;
    return 0;
}
