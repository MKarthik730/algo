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

    int small = 0, large = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[small])
            small = i;
        if (arr[i] > arr[large])
            large = i;
    }
    swap(arr[small], arr[large]);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
