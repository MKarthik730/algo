#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    vector<int> merged;
    merged.reserve(n1 + n2);
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
            merged.push_back(arr1[i++]);
        else
            merged.push_back(arr2[j++]);
    }
    while (i < n1)
        merged.push_back(arr1[i++]);
    while (j < n2)
        merged.push_back(arr2[j++]);

    int total = n1 + n2;
    double median;
    if (total % 2 == 1)
        median = merged[total / 2];
    else
        median = (merged[total / 2 - 1] + merged[total / 2]) / 2.0;
    cout << fixed << setprecision(1) << median << "\n";
    return 0;
}
