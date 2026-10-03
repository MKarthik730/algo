#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m));
    vector<vector<long long>> dp(n, vector<long long>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> grid[i][j];

    dp[0][0] = grid[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
                continue;
            if (i == 0)
                dp[i][j] = dp[i][j - 1] + grid[i][j];
            else if (j == 0)
                dp[i][j] = dp[i - 1][j] + grid[i][j];
            else
                dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + grid[i][j];
        }
    }
    cout << dp[n - 1][m - 1] << "\n";
    return 0;
}
