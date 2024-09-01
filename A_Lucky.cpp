#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;

        int fSum = 0, lSum = 0;
        int sz = s.size();

        for (int i = 0; i < sz; i++){
            if (i >= 0 && i <= 2)
                fSum += s[i] - '0';
            else
                lSum += s[i] - '0';
        }

        if(fSum == lSum)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}