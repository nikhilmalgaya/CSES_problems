#include <bits/stdc++.h>
using namespace std;

char find_digit(unsigned long long n)
{
    string sequence = "";
    int curr_len = 0;
    unsigned long long curr_num = 1;

  
    while (n > 0)
    {
        unsigned long long curr_count = 9 * curr_num * (to_string(curr_num).length());
        if (n <= curr_count)
        {
            unsigned long long actual_num = (n - 1) / to_string(curr_num).length() + curr_num;
            int digit_pos = (n - 1) % to_string(curr_num).length();
            return to_string(actual_num)[digit_pos]; 
        }
        n -= curr_count;
        curr_num *= 10;
    }
    return '0';
}

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        unsigned long long n;
        cin >> n;
        cout << find_digit(n) << endl;
    }
    return 0;
}
