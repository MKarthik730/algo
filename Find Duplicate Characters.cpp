#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int bits = 0;
    bool found = false;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        int pos = s[i] - 'a';
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                if (!(bits & (1 << pos)))
                {
                    cout << s[i] << " ";
                    bits |= (1 << pos);
                    found = true;
                }
                break;
            }
        }
    }
    if (!found)
        cout << "No duplicates";
    return 0;
}
