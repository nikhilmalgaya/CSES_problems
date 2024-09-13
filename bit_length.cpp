#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int sum = 1;

    for (int i = 0; i < n; i++)
    {

        sum = (sum * 2) % int((pow(10, 9) + 7));
    }
    cout << sum;

    return 0;
}
