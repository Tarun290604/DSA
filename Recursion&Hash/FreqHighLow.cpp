#include<bits/stdc++.h>
using namespace std;

void CountFreq(int a[],int n){
    vector<bool> visited(n,0);
    int mxFreq=0,minFreq=n;
    int maxele=0,minEle=0;

    for(int i=0;i<n;i++){
        if(visited[a[i]]==true)
            continue;
        
        int count=1;
        
        for(int j=i+1;j<n;j++){
            if(a[j]==a[i]){
                count++;
                visited[a[j]]=true;
            }
            if(count>mxFreq){
                maxele=a[i];
                mxFreq=count;
            }
            if(count<minFreq){
                minEle=a[i];
                minFreq=count;
            }
        }
    }
    cout<<maxele<<" with "<<mxFreq<<endl;
    cout<<minEle<<" with "<<minFreq<<endl;
}


int main(){
    int arr[] = {10,20,10,20,30,30,40,50,60,50,60,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    CountFreq(arr,n);
    return 0;
}