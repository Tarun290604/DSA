#include<bits/stdc++.h>
using namespace std;

int findFloor(vector<int>& arr, int k) {

        // Your code here
        int ans=-1;
        int s=0,e=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]<=k){
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>k){
                e=mid-1;
            }
        }
        return ans;
}

int findLowerBound(vector<int>& arr, int k) {

        // Your code here
        int ans=arr.size();
        int s=0,e=arr.size()-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(arr[mid]>=k){
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]<k){
                s=mid+1;
            }
        }
        return ans;
}

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	
	int s=0,e=n-1;
	int ans=n;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]>x){
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	return ans;
}

vector<int> getFloorAndCeil(int target, vector<int> &nums) {
    int start = 0, end = nums.size() - 1;
    sort(nums.begin(), nums.end());
    
    int flr = -1, cl = -1;
    while(start<=end){
        int mid = (end+start)/2;
        
        if(nums[mid] < target) {
            flr = mid;
            start = mid+1;
        }
        else if(nums[mid] > target) {
            cl = mid;
            end = mid-1;
        }
        else {
            return { target, target };
        }
    }
    return {flr != -1 ? nums[flr] : -1, cl != -1 ? nums[cl] : -1};
    }

int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int ans=-1;
	int s=0,e=arr.size()-1;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]==m) return mid;
		else if(arr[mid]>m){
			ans=mid;
			e=mid-1;
		}
		else{
			ans=mid+1;
			s=mid+1;
		}
	}
	if(arr.size()==0)
		return 0;
	return ans;
}

int main(){
    vector<int> arr = {1, 2, 5, 6, 9};
    int k = 7;
    // cout << findFloor(arr, k) << endl;
    // cout << findLowerBound(arr, k) << endl;
    // cout << upperBound(arr, k,5) << endl;
    // vector<int> ans = getFloorAndCeil(k,arr);
    // cout<<ans[0]<<"   "<<ans[1]<<endl;
    cout<<searchInsert(arr,k)<<endl;
    return 0;
}