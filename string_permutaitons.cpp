
#include <bits/stdc++.h>
using namespace std;

bool shouldSwap(string a, int start, int curr)
{
    for (int i = start; i < curr; i++)
        if (a[i] == a[curr])
            return 0;
    return 1;
}



void findPermutations(string a, int index, int n, int &count, std::set<string> &s)
{
    if (index >= n)
    {
        s.emplace(a);
        count++;
        return;
    }

    for (int i = index; i < n; i++)
    {
        bool check = shouldSwap(a, index, i);
        if (check)
        {
            swap(a[index], a[i]);
            findPermutations(a, index + 1, n, count,s);
            swap(a[index], a[i]);
        }
    }
}

int main()
{
    string a;
    cin >> a;
    int count = 0;
    int n = a.length();
    std::set<string> s;

    findPermutations(a, 0, n, count, s);
    cout << count << endl;
    for(auto i:s){
        cout << i << endl;
    }
    return 0;
}
