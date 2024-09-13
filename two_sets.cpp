#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{

    int n;
    int flag = 0;

    cin >> n;
    int k = n;

    if (n == 1)
        cout << "NO";

        else if (n % 2 == 0)
    {
        if ((n / 2) % 2 == 0)
        {
            cout << "YES" << endl;
            cout << n / 2 << endl;

            while (n >= 1)
            {

                cout << n << " ";

                if (!flag)
                {
                    n = n - 3;
                    flag = 1;
                }

                else
                {
                    n = n - 1;
                    flag = 0;
                }
            }
            n = k - 1;
            flag = 1;
            cout << endl
                 << k / 2 << endl;

            while (n >= 1)
            {

                cout << n << " ";

                if (!flag)
                {
                    n = n - 3;
                    flag = 1;
                }

                else
                {
                    n = n - 1;
                    flag = 0;
                }
            }
        }
        else
            cout << "NO";
    }

    else if ((n - 3) % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;

        while (n >= 1)
        {

            cout << n << " ";

            if (!flag)
            {
                n = n - 3;
                flag = 1;
            }

            else
            {
                n = n - 1;
                flag = 0;
            }
        }
        n = k - 1;
        flag = 1;
        cout << endl
             << k / 2 + 1 << endl;

        while (n >= 1)
        {

            cout << n << " ";

            if (!flag)
            {
                n = n - 3;
                flag = 1;
            }

            else
            {
                n = n - 1;
                flag = 0;
            }
        }
    }

    else
    {
        cout << "NO";
    }

    return 0;
}
