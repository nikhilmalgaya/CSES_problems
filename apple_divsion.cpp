
#include <bits/stdc++.h>

using namespace std;



long long min_two_group(long long n,vector<long long> a)
{

    long long min_sum = LLONG_MAX;

    long long total_sum = 0;

    for (auto i : a)
    {

        total_sum = total_sum + i;
    }

    for (long long i = 1; i < pow(2, n); i++)
    {
        long long k = i;
        long long sum1 = 0;
        for (long long j = 0; j < n; j++)
        {
            // cout << "k" << k << " ";
            sum1 = sum1 + a[n - j - 1] * (k & 1);
            // cout << a[n - j - 1] * (k & 1) << " ";
            k=k >> 1;
        }
        
        min_sum = min(min_sum, abs(total_sum - 2*sum1));
        // cout << "min_sum" << min_sum<< endl;
        // cout << endl;
    }

    return min_sum;
}

int main()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        }
    long long b=    min_two_group(n, a);
    cout << b;
    return 0;
}
