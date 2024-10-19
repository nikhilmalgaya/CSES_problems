#include <iostream>
#include <string>
#include <vector>

using namespace std;

string generatpali(int n)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    string result;

    int fulgr = n / 5;
    int rem = n % 5;

    for (int i = 0; i < 5; ++i)
    {

        for (int j = 0; j < fulgr; ++j)
        {
            result += vowels[i];
        }

        if (i < rem)
        {
            result += vowels[i];
        }
    }

    return result;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cout << generatpali(n) << endl;
    }

    return 0;
}
