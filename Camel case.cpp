#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
    int n;
    string input, pattern;
    cin >> n;
    getline(cin >> ws, input);
    cin >> pattern;

    vector<string> words;
    string cur;
    for (char c : input)
    {
        if (c == ',')
        {
            words.push_back(cur);
            cur.clear();
        }
        else
            cur += c;
    }
    words.push_back(cur);

    bool found = false;
    for (const string &w : words)
    {
        string abbreviation;
        for (char c : w)
            if (isupper((unsigned char)c))
                abbreviation += c;

        if (abbreviation.compare(0, pattern.size(), pattern) == 0)
        {
            cout << w << "\n";
            found = true;
        }
    }
    if (!found)
        cout << "No match found";
    return 0;
}
