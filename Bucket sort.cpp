#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<float> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<vector<float>> bucket(n);
    for (int i = 0; i < n; i++)
    {
        int index = (int)(arr[i] * n);
        if (index >= n)
            index = n - 1;
        bucket[index].push_back(arr[i]);
    }

    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        sort(bucket[i].begin(), bucket[i].end());
        for (float v : bucket[i])
        {
            if (v == (int)v)
                cout << (int)v << " ";
            else
                cout << v << " ";
        }
    }
    return 0;
}
