#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> runningSum(n);
    runningSum[0] = a[0];
    for(int i=1; i<n; i++){
        runningSum[i] = a[i] + runningSum[i-1];
    } 


    for(int i=1; i<n; i++){
        int lSum=0, rSum=0;

        lSum = runningSum[i-1];
        rSum = runningSum[n-1] - runningSum[i];

        if(lSum == rSum){
            cout<<endl<<i<<" ";
            break;
        }
        else
            continue;
    }




    return 0;
}