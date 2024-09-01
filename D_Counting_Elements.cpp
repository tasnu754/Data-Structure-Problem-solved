#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, cnt=0;
    cin>>n;

    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int val : a){
      auto it =  find(a.begin(), a.end(), val+1);

      if(it!= a.end())
        cnt++;
    }

    cout<<cnt;


    return 0;
}