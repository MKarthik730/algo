#include <iostream>
#include <vector>
using namespace std;

int maxAscendingSum(const vector<int> &arr)
{
    int n = arr.size();
    if (n <= 0)
        return 0;
    int max_sum = arr[0];
    int current_sum = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
            current_sum += arr[i];
        else
        {
            max_sum = max(max_sum, current_sum);
            current_sum = arr[i];
        }
    }
    return max(max_sum, current_sum);
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << maxAscendingSum(arr) << "\n";
    return 0;
}
