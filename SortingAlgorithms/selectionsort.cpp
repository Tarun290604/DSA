#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {10,15,6,8,7,6,1,2,3,8,69,88,105};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n-1;i++){
        int y=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[y]){
                y=j;
            }
        }
        swap(arr[i],arr[y]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}