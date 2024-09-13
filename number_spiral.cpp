#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {

        unsigned long long y, x;

        cin >> y >> x;

        unsigned long long num;

        if (y > x)
        {

            if (y % 2 == 0)
                num = (y * y) - (x - 1);

            else
            {
                num = ((y - 1) * (y - 1) + 1) + (x - 1);
            }
        }

        else
        {

            if (x % 2 != 0)
            {
                num = (x * x) - (y - 1);
                // cout << num << " ";
            }

            else
            {
                num = ((x - 1) * (x - 1) + 1) + (y - 1);
                        }
        }

        cout << num << endl;
    }

    return 0;
}
