#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> x;

    sort(arr.begin(), arr.end());

    bool found = false;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == x)
            {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << "\n";
                found = true;
                j++;
                k--;
            }
            else if (sum < x)
                j++;
            else
                k--;
        }
    }
    if (!found)
        cout << "No Triplet Found";
    return 0;
}
