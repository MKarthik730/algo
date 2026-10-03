#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> grid(n, vector<int>(m)), dp(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if (grid[i][j] == 2)
                dp[i][j] = 0;
            else if (grid[i][j] == 1)
                dp[i][j] = 9999;
            else
                dp[i][j] = -1;
        }
    }

    bool changed = true;
    while (changed)
    {
        changed = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] != 1)
                    continue;
                int best = dp[i][j];
                if (i > 0 && dp[i - 1][j] != -1 && dp[i - 1][j] + 1 < best)
                    best = dp[i - 1][j] + 1;
                if (i < n - 1 && dp[i + 1][j] != -1 && dp[i + 1][j] + 1 < best)
                    best = dp[i + 1][j] + 1;
                if (j > 0 && dp[i][j - 1] != -1 && dp[i][j - 1] + 1 < best)
                    best = dp[i][j - 1] + 1;
                if (j < m - 1 && dp[i][j + 1] != -1 && dp[i][j + 1] + 1 < best)
                    best = dp[i][j + 1] + 1;
                if (best < dp[i][j])
                {
                    dp[i][j] = best;
                    changed = true;
                }
            }
        }
    }

    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                if (dp[i][j] == 9999)
                {
                    cout << "-1\n";
                    return 0;
                }
                answer = max(answer, dp[i][j]);
            }
        }
    }
    cout << answer << "\n";
    return 0;
}
