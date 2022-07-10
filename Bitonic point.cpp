
#include <bits/stdc++.h>

using namespace std;

#include<vector>

class Solution{
public:
    int binarySearch(int arr[], int start,int end){
        if(start==end){
            return arr[start];
        }
        
        int mid=(start+end)/2;
        if(mid==0 || mid==end+1){
            return arr[mid];
        }
        if(arr[mid]>arr[mid-1]){
            if(arr[mid]>arr[mid+1]){
                return arr[mid];
            }
            else{
                return binarySearch(arr,mid+1,end);
            }
        }else{
            return binarySearch(arr,start,mid-1);
        }
    }
	
	int findMaximum(int arr[], int n) {
	    // code here
	    return binarySearch(arr,0,n-1);
	     
	}
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}