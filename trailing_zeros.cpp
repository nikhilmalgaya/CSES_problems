#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int k = 5, sum = 0;

    while (n >= k)
    {
        sum = sum + (n / k);
        k *= 5;
    }

    cout << sum;

    return 0;
}
