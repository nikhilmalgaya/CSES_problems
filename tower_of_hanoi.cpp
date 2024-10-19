#include <bits/stdc++.h>
using namespace std;
inline void fast_io()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void towerOfHanoi(int n, int a, int b,
                  int c)
{
    if (n == 1)
    {
        cout  << a << " " << c << endl;
        return;
    }
    towerOfHanoi(n - 1, a, c, b);
    cout << a
         << " " << c<< endl;
    towerOfHanoi(n - 1, b, a, c);
}

int main()
{
    fast_io();

    int n;
    cin >> n;

    cout << pow(2, n) - 1 << endl;

    towerOfHanoi(n, 1, 2, 3);

    return 0;
}
