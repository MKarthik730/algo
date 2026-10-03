#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    int V, N;
    cin >> V >> N;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    vector<int> dp(V + 1, INT_MAX);
    dp[0] = 0;
    for (int i = 1; i <= V; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j] <= i && dp[i - arr[j]] != INT_MAX)
                dp[i] = min(dp[i], dp[i - arr[j]] + 1);
        }
    }

    if (dp[V] == INT_MAX)
        cout << "-1\n";
    else
        cout << dp[V] << "\n";
    return 0;
}
