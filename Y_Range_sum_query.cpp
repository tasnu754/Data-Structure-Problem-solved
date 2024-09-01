#include<bits/stdc++.h>

using namespace std;

int main(){

    long long n, q;
    cin>>n>>q;

    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    long long pre[n];
    pre[0] = a[0];
    for(int i=1; i<n; i++){
        pre[i] = a[i] + pre[i-1];
    }

    while(q--){
        long long x, y, sum=0;
        cin>>x>>y;
        x--, y--;
        if(x == 0)
            sum = pre[y];
        else
            sum = pre[y] - pre[x-1];


        cout<<sum<<endl;
    }






    return 0;
}