#include<bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;
    int sz = s.size();

    vector<int> fq(26,0);
    for(int i=0; i<sz; i++){
        fq[s[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        if(fq[i]!=0){
                cout<<char(i+'a')<<" : "<<fq[i]<<endl;
                fq[i]--;
            
        }
    }



    


    return 0;
}