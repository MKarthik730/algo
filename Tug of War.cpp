#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int minDiff = a[0];
    for (int i = 0; i <= sum; i++)
    {
        int x = i;
        int y = sum - x;
        int diff = abs(x - y);
        if (diff < minDiff)
            minDiff = diff;
    }
    cout << minDiff;
    return 0;
}
