#include <iostream>
#include <string>
using namespace std;

int pal(const string &s, int i, int j)
{
    if (i > j)
        return 0;
    if (i == j)
        return 1;
    if (s[i] == s[j])
        return 2 + pal(s, i + 1, j - 1);
    return max(pal(s, i + 1, j), pal(s, i, j - 1));
}

int main()
{
    string s;
    cin >> s;
    cout << pal(s, 0, (int)s.size() - 1);
    return 0;
}
