#include <iostream>
using namespace std;

int length(long long n)
{
    int count = 1;
    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        count++;
    }
    return count;
}

int main()
{
    int i, j;
    cin >> i >> j;
    int a = i, b = j;
    if (i > j)
        swap(i, j);
    int maxLen = 0;
    for (int k = i; k <= j; k++)
    {
        int len = length(k);
        if (len > maxLen)
            maxLen = len;
    }
    cout << a << " " << b << " " << maxLen;
    return 0;
}
