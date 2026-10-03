#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int currentSum = arr[0];
    int maxSum = arr[0];
    for (int i = 1; i < n; i++)
    {
        currentSum = max(currentSum + arr[i], arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << maxSum;
    return 0;
}
