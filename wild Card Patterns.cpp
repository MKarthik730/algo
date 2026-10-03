#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, pattern;
    cin >> str >> pattern;
    int n = str.size(), m = pattern.size();
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (pattern[j] == '?')
        {
            i++;
            j++;
        }
        else if (pattern[j] == '*')
        {
            j++;
            while (i < n && j < m && pattern[j] != str[i] && pattern[j] != '?')
                i++;
        }
        else if (str[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            cout << "0";
            return 0;
        }
    }
    while (j < m && pattern[j] == '*')
        j++;
    cout << (i == n && j == m ? "1" : "0");
    return 0;
}
