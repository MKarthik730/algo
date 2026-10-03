#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    for (int len = n - 1; len > 0; len--)
    {
        if (s.compare(0, len, s, n - len, len) == 0)
        {
            cout << s.substr(0, len);
            break;
        }
    }
    return 0;
}
