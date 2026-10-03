#include <iostream>
using namespace std;

int BinGCD(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    if (a % 2 == 0 && b % 2 == 0)
        return 2 * BinGCD(a / 2, b / 2);
    if (a % 2 == 0)
        return BinGCD(a / 2, b);
    if (b % 2 == 0)
        return BinGCD(a, b / 2);
    if (a > b)
        return BinGCD((a - b) / 2, b);
    if (b > a)
        return BinGCD(a, (b - a) / 2);
    return a;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << BinGCD(a, b);
    return 0;
}
