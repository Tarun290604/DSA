#include<bits/stdc++.h>
using namespace std;

int Binsearch(int arr[],int s,int e,int key){
    int mid=(s+e)/2;
    if(s>e) return -1;
    if(arr[mid]==key) return mid;
    if(arr[mid]>key)  return Binsearch(arr,s,mid-1,key);
    return Binsearch(arr,mid+1,e,key);
}

int main(){
    int a[]= {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    int s=0,e=n-1;
    int key;
    cout<<"Enter the key:"<<endl;
    cin>>key;
    // while(s<=e){
    //     int mid=s+(e-s)/2;
    //     if(a[mid]==key){
    //         cout<<"Element is present at index "<<mid<<endl;
    //         break;
    //     }
    //     else if(a[mid]<key){
    //             s=mid+1;
    //     } 
    //     else{
    //         e=mid-1;
    //     }
    // }
    cout<<"Element is at Index: "<<Binsearch(a,0,e,key)<<endl;
    return 0;
}