#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int cnt = 0, sz = s.size();
    bool inWord = false;

    for (int i = 0; i < sz; i++)
    {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if (!inWord)
            {
                cnt++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }

    cout << cnt << endl;

    return 0;
}