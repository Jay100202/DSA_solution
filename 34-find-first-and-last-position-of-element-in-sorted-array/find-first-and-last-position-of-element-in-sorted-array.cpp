class Solution {
public:

    // int lowerBound(vector<int> arr, int n, int x) {
    //     int low = 0,high = n-1;
    //     int ans = n;
    //     while(low <= high){
    //         int mid = (low + high)/2;

    //         if(arr[mid] >= x){
    //             ans = mid;
    //             high = mid - 1;
    //         }
    //         else{
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }

    // int upperBound(vector<int> &arr, int n, int x){
    //     int low = 0,high = n-1;
    //     int ans = n;
    //     while(low <= high){
    //         int mid = (low + high)/2;

    //         if(arr[mid] > x){
    //             ans = mid;
    //             high = mid - 1;
    //         } else {
    //             low = mid + 1;
    //         }
    //     }
    //     return ans;
    // }

    int firstOccurence(vector<int> &nums, int target)
    {
        int s=0, e=nums.size()-1;
        int first=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                first=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            s=mid+1;
            else
            e=mid-1;
        }
        return first;
    }
    int lastOccurence(vector<int> &nums, int target)
    {
        int s=0, e=nums.size()-1;
        int last=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                last=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            s=mid+1;
            else
            e=mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstOccurence(nums,target);
        int last=lastOccurence(nums,target);
        return {first,last};
        
        // int n = nums.size();
        // int lb = lowerBound(nums,n,target);
        // if(lb == n || nums[lb] != target){
        //     return {-1,-1};
        // }
        // else{
        //     return {lb, upperBound(nums,n,target) - 1};
        // }

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