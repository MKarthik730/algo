#include <iostream>
#include <climits>
using namespace std;

int divide(int dividend, int divisor)
{
    long long result = (long long)dividend / divisor;
    if (result > INT_MAX)
        return INT_MAX;
    if (result < INT_MIN)
        return INT_MIN;
    return (int)result;
}

int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    cout << divide(dividend, divisor);
    return 0;
}
