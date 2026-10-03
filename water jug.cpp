#include <iostream>
using namespace std;

int GCD(int A, int B)
{
    if (A == 0)
        return B;
    if (B == 0)
        return A;
    if (A % 2 == 0 && B % 2 == 0)
        return GCD(A / 2, B / 2);
    if (A % 2 == 0)
        return GCD(A / 2, B);
    if (B % 2 == 0)
        return GCD(A, B / 2);
    if (A > B)
        return GCD((A - B) / 2, B);
    if (B > A)
        return GCD(A, (B - A) / 2);
    return A;
}

int main()
{
    int A, B, T;
    cin >> A >> B >> T;
    int n = GCD(A, B);
    if ((A > T || B > T) && T % n == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
