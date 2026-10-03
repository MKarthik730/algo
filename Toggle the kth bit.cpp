#include <iostream>
using namespace std;

int main()
{
    int N, K;
    cin >> N >> K;
    N = N ^ (1 << K);
    cout << N << "\n";
    return 0;
}
