#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int count[100] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        count[x]++;
    }
    for (int i = 0; i < 100; i++)
        cout << count[i] << " ";
    return 0;
}
