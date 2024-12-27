#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {10,15,6,8,7,6,1,2,3,8,69,88,105};
    int n = sizeof(a)/sizeof(a[0]);

    for(int i=0;i<n;i++){
         int j=i;
         while(j>0&&a[j]<a[j-1]){
            swap(a[j],a[j-1]);
            j--;
         }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}   