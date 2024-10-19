#include <bits/stdc++.h>
using namespace std;

void find_number(long long n)
{

    cout << n << " ";

    while (n > 1)
    {

        if (n % 2 == 0)
            n = n / 2;
        else
        {
            n = n * 3;
            n++;
        }
        cout << n << " ";
    }
}

int main()
{
    long long q;
    cin >> q;
    find_number(q);
    return 0;
}
