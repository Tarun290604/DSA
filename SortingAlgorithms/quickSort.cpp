#include<bits/stdc++.h>
using namespace std;

int funcwithHigh(int arr[],int l,int h){
    int pivot = arr[h];
    int i=l,j=h-1;
    while(i<j){
        while(arr[i]<=pivot&&i<=h-1)
            i++;
        while(arr[j]>pivot&&j>=l+1)
            j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[h],arr[i]);
    return i;
}
int func(int arr[],int l,int h){
    int pivot = arr[l];
    int i=l,j=h;
    while(i<j){
        while(arr[i]<=pivot&&i<=h-1)
            i++;
        while(arr[j]>pivot&&j>=l+1)
            j--;
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[l],arr[j]);
    return j;
}

void qSort(int arr[],int low,int high){
    if(low<high){
        int partition = funcwithHigh(arr,low,high);
        qSort(arr,low, partition-1);
        qSort(arr,partition+1,high);
    }
}
int main(){
    int arr[] = {10,15,6,8,7,6,1,2,3,8,69,88,105};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    qSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}