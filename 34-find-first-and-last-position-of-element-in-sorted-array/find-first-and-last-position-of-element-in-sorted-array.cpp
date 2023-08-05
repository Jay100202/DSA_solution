class Solution {
public:

    int lowerBound(vector<int> arr, int n, int x) {
        int low = 0,high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] >= x){
                ans = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int> &arr, int n, int x){
        int low = 0,high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high)/2;

            if(arr[mid] > x){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int n = nums.size();
        int lb = lowerBound(nums,n,target);
        if(lb == n || nums[lb] != target){
            return {-1,-1};
        }
        else{
            return {lb, upperBound(nums,n,target) - 1};
        }

        // linear search
        // int first = -1,last = -1;
        // for(int i = 0;i<nums.size();i++){
        //     if(nums[i] == target){
        //         if(first == -1){
        //             first = i;
        //         }
        //         last = i;
        //     }
        // }
        // return {first,last};
    }
};