#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    if (y == 0)
    {
        cout << "Division by zero not possible";
        return 0;
    }
    int low = 0, high = x;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long prod = (long long)mid * y;
        if (prod == x)
        {
            cout << mid;
            return 0;
        }
        else if (prod < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}
