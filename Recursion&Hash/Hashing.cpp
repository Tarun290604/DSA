#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto i:mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    // int q;
    // cin>>q;
    // while(q--){
    //     int x;
    //     cin>>x;

    //     cout<<mp[x]<<endl;
    // }

    return 0;
}