#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int fq[26]= {0}, sum=0;

        for(int i=0; i<n; i++){

            if(fq[s[i] - 'A'] == 0){
                fq[s[i] - 'A'] += 2;
            }
            else
                fq[s[i] - 'A']++;
        }

        for(int i=0; i<n; i++){

            if(fq[s[i] - 'A'] != 0){
                sum += fq[s[i] - 'A'];
                fq[s[i] - 'A'] = 0;
            }
        }

        cout<<sum<<endl;
    }


    return 0;
}