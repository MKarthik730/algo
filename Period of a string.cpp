#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int p = 1; p <= n; p++)
    {
        if (n % p != 0)
            continue;
        bool possible = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i % p])
            {
                possible = false;
                break;
            }
        }
        if (possible)
        {
            cout << p << "\n";
            break;
        }
    }
    return 0;
}
