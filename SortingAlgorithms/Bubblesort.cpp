#include<bits/stdc++.h>
using namespace std;


void bubble_sort(int arr[], int n) {
    // Base Case: range == 1.
    if (n == 1) return;

    for (int j = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    //Range reduced after recursion:
    bubble_sort(arr, n - 1);
}

int main(){
    int a[] = {10,15,6,8,7,6,1,2,3,8,69,88,105};
    int n = sizeof(a)/sizeof(a[0]);
    
//    for(int i=n-1;i>=1;i--){
//     int didswap=0;
//     for(int j=0;j<i;j++){
//         if(a[j]>a[j+1]){
//             swap(a[j],a[j+1]);
//             didswap=1;
//         }
//     }
//     if(didswap=0)
//         break;
//    }
    bubble_sort(a, n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}