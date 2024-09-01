#include<bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    cin>>n>>t;

    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a, a+n);

    while(t--){
        int x, l, r, flag=0;
        cin>>x;

        l = 0;
        r = n-1;

        while(l<=r){
          int mid = (l+r)/2;

          if(a[mid] == x){
            flag = 1;
            break;
          }
          else if(x > a[mid]){
            l = mid + 1;
          }
          else{
            r = mid - 1;
          }
        }

        if(flag)
            cout<<"found"<<endl;
        else
            cout<<"not found"<<endl;
    }


    return 0;
}