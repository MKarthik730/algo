#include <iostream>
#include <cstdlib>
using namespace std;

int gcdExtended(int a, int b, int &x, int &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcdExtended(b, a % b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

int main()
{
    int A, B;
    cin >> A >> B;
    int x0, y0;
    int D = gcdExtended(A, B, x0, y0);
    int p = B / D;
    int q = A / D;
    int bestX = x0, bestY = y0;
    int best = abs(x0) + abs(y0);
    int k1 = -x0 / p;
    int k2 = y0 / q;
    int k[6] = {k1 - 1, k1, k1 + 1, k2 - 1, k2, k2 + 1};
    for (int K : k)
    {
        int x = x0 + K * p;
        int y = y0 - K * q;
        int current = abs(x) + abs(y);
        if (current < best)
        {
            best = current;
            bestX = x;
            bestY = y;
        }
        else if (current == best && x <= y)
        {
            bestX = x;
            bestY = y;
        }
    }
    cout << bestX << " " << bestY << " " << D << "\n";
    return 0;
}
