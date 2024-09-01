#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c;

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        cin>>b[i];
    }

    for(int i:b)
        c.push_back(i);
    for(int i:a)
        c.push_back(i);

    for(int ele: c)
        cout<<ele<<" ";


    return 0;
}