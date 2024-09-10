#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    long long min = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {

        if (arr[i + 1] < arr[i])
        {
            min = min + (arr[i] - arr[i + 1]);

            arr[i + 1] = arr[i];

            // cout << min << arr[i + 1] << endl;
        }
    }

    cout << min;

    return 0;
}
