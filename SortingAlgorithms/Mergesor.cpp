#include<bits/stdc++.h>
using namespace std;

void Merge(int a[],int l,int m,int h){
    vector<int> temp;
    int left=l;
    int right=m+1;

    while(left<=m&&right<=h){
        if(a[left]<=a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }
    while(left<=m){
        temp.push_back(a[left]);
        left++;
    }
    while(right<=h){
        temp.push_back(a[right]);
        right++;
    }
    for(int i=0;i<temp.size();i++){
        a[i+l]=temp[i];
    }
}

void Mergesort(int a[],int low,int high){

    if(high==low)
        return;
    int mid=(low+high)/2;
    Mergesort(a,0,mid);
    Mergesort(a,mid+1,high);
    Merge(a,low,mid,high);
}

int main(){
    int arr[] = {5, 6 , 1 ,2, 3,8,7,9,10,15,20,16};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    Mergesort(arr,0,n-1);

     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}