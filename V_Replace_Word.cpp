#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin >> s;
    int st = 0;

    while (s.find("EGYPT", st) != -1)
    {
        s.replace(s.find("EGYPT", st), 5, " ");
        st = s.find("EGYPT", st);
    }

    cout << s << endl;

    return 0;
}